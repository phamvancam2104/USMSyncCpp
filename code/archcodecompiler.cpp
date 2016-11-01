class System {
public:	
	Producer p;	
	Consumer c;
	FIFO fifo;
	void configuration() {
		p.pPush = &fifo;
		c.pPull = &fifo;
	}
};
class Producer {
public: IPush* pPush;
}
class Consumer {
public:	IPull* pPull;
}
