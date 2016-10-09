if (guard1) {
	activeStateID = STATE_MAX;
} else {
	activeStateID = S2_ID;	Entry(S2_ID);
	unsigned int S2_dh1;
	if (states[S2_ID].previousStates[0]!=STATE_MAX) {
		S2_dh1=states[S2_ID].previousStates[0];
		Entry(S2_dh1);
		if (S21_ID==S2_dh1) {
			int S21_dh1=states[S21_ID].previousStates[0];
			Entry(S21_dh1);
		}
	} else {
		states[S2_ID].actives[0]=S21_ID; Entry(S21_ID);
		states[S21_ID].actives[0]=S211_ID;
		Entry(S211_ID);
	}
}

