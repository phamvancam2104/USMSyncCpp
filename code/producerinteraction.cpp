class Producer {
	void sendDataToFifo(Data& item) {
		pPush->push(data);
	}
}
class Consumer {	
	Data* pullDataFromFifo() {
		pPull->pull();
	}
}
