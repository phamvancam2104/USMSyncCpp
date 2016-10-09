class System {
	state_machine(Machine) {
		initial_state(S11,S11_entry,S11_exit,NULL,NULL);
		choice(c1);
		state(S2, S2_entry, S2_exit,NULL) {
			entry_point(Enp1);
			shallow_history(h1);
			state(S21, S21_entry, S21_exit,NULL);
			final_state(S2_final);
		};
		state(S3, S3_entry, S3_exit,NULL);
		final_state(FinalState1);
		//Event table definitions
		//Transition table
		transition_table {
			transition(S11,c1,NULL,NULL,NULL);
			transition(c1,Enpt,NULL,NULL,NULL);
			transition(c1,S3,NULL,NULL,NULL);
		}
	};
	void S11_entry() {
		//Entry action for S11
	}
	//...
	//class member declarations
};
