class ProducerDelegatee {
public:
	Producer* component;
	void set_pPush(IPush* impl) {
		component->pPush.requiredIntf=impl;
	}
}
class FIFODelegatee: public IPush {
public:
	FIFO* component;
	IPush* get_pPush() {return this;}
	IPull* get_pPull() {return component;}
	void processDataPushEvent(Data& sig) {  
	 if (active_state==IDLE){//check the Idle state active
		component->signalCheck(sig);//transition effect
		active_state=SIGNALCHECKING;//set active state
	 }
	}
	void push(Data& data) {
		processDataPushEvent(data);
		component->push(data);
	}
}
class SystemDelegatee{
public:
	System* component; 
	void createConnections(){
		component->p.delegatee.set_pPush(
			component->fifo.delegate.get_pPush());
		component->p.delegatee.set_pPull(
			component->fifo.delegate.get_pPull());
	}
}