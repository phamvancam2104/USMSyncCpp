if (currentEvent->stateId==S11_ID)){
	Exit(S11_ID);
	if (guard1) {
		activeStateID = S3_ID;		Entry(S3_ID);
	} else {
		activeStateID = S2_ID;		Entry(S2_ID);
		unsigned int loc_ActiveId;
		if(states[S2_ID].previousStates[0]!=STATE_MAX) {
			loc_ActiveId=states[S2_ID].previousStates[0];
		} else {
			loc_ActiveId = S21_ID;
		}
		states[S2_ID].actives[0]=loc_ActiveId;
		Entry(loc_ActiveId);
	}
}