class FIFO : public IPush, IPull {
public:
	ProvidedPort<IPush>* pPush;
	ProvidedPort<IPull>* pPull;
	//Behavior-prescribed code
	Statemachine FIFOMachine {
		InitialState Idle;
		State SignalChecking {
			StateEntry entryCheck;
			StateExit exitCheck;
		};
		State ErrorNotification {
			StateEntry entryError;
		};
		State DataQueuing {
			StateEntry entryQueue;
			PseudoChoice queueChoice;
			State Queuing;
		};
		State Discarding;
		PseudoChoice dataChoice;
		CallEvent(DataPushEvent,push);
		TransitionTable {
			Transition(Idle,SignalChecking,
				DataPushEvent,NULL,signalCheckingEffect);
			Transition(SignalChecking,dataChoice,
						NULL,NULL,NULL);
			Transition(dataChoice,queueChoice,
						NULL,isDataValid,NULL);
		}
		configuration {
			QueueSize = 50;
			PeriodicTime = 20;
		}
	};
	
	//State machine action code
	void entryCheck(){
		//action code for entry of SignalChecking
	}
	void exitCheck(){
		//action code for exit of SignalChecking
	}
	void entryError(){
		//action code for entry of ErrorNotification
	}
	void signalCheckingEffect(Data& item) {
		//effect for transition from Idle to SignalChecking
	}
	
}