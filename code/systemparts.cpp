class System {
public:
	part Producer p;
	part Consumer c;
	part FIFO fifo;
	configuration {
		bindPorts(p.pPush, fifo.pPush); 
		bindPorts(c.pPull, fifo.pPull); 
	}
}
class IPull {
	virtual Data* pull() = 0;
}
class IPush {
	virtual void push(Data& data) = 0;
}
class Producer {
public:
	RequiredPort<IPush> pPush;
};

class Consumer {
public:
	RequiredPort<IPull> pPull;
};
class FIFO : public IPush, IPull {
public:	
	ProvidedPort<IPush> pPush;
	ProvidedPort<IPull> pPull;
	Data* pull(){
		//fine-grained code for pull
	}
	void push(Data& data){
		//fine-grained code for push
	}
	int numberOfItems;
	const int MAX_SIZE = 100;
	Data queue[MAX_SIZE];
	bool isDataValid;
	bool isFullQueue() {
		//fine-grained code
	}
}
