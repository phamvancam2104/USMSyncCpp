state(S2, S2_entry, S2_exit) {
	deep_history(dh1);
	state(S21, S21_entry, S21_exit,NULL) {
		state(S211, S211_entry, S211_exit,NULL);
	};
};
final_state(FinalState1);
//Event table definitions
//Transition table
transition_table {
	transition(S11,c1,NULL,NULL,NULL);
	transition(c1,dh1,NULL,NULL,NULL);
	transition(c1,FinalState1,NULL,NULL,NULL);
}

