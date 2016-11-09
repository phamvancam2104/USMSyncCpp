class Producer {
public:
	ProvidedDataPort<Data>* pProvideData;
}
class FIFO : public IPush, IPull {
public:
	RequiredDataPort<Data>* pRequireData;
	ProvidedPort<IPull>* pPull;
}

