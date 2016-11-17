class Producer {
public:
	ProvidedDataPort<Data>* pProvideData;
	
	void sendToFifo(Data& item) {
		pProvideData->sendSignal(item);
	}
}
class FIFO : public IPush, IPull {
public:
	RequiredDataPort<Data>* pRequireData;
	ProvidedPort<IPull>* pPull;
}

