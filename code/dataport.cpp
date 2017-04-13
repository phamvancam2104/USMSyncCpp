class Producer {
public:
	OutFlowPort<Data> pOutData;
	void sendToFifo(Data& item) {
		pOutData.intf->push(item);
	}
}
class FIFO : public IPush, IPull {
public:
	InFlowPort<Data> pInData;
	OutFlowPort<IPull> pOutData;
}

