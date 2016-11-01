class Producer {
public:
	ProvidedDataPort<Data> pProvideData;
}
class FIFO : public IPush, IPull {
public:
	RequiredDataPort<Data> pRequireData;
	ProvidedDataPort<Data> pProvideConsumer;
}
class Consumer {
public:	
	RequiredDataPort<Data> pRequireData;	
}
