class SystemController {
public:
  System* pSys; FIFOController controller;
  void configuration(){
	controller.pFifo=&pSys->fifo;
    pSys->p.pPush.required=&controller;
    pSys->fifo.pPush.provided=&controller;
    pSys->c.pPull.required=pSys->fifo; 
    pSys->fifo.pPull.provided=pSys->fifo;
  }
}
class FIFOController: public IPush {
public:
  FIFO* pFifo;
  void processDataPushEvent(Data& sig) {
    //check the Idle state active
    //call the transition effect pFifo->signalCkeck(sig)
    //set the SignalChecking state active
  }
  void push(Data& data) {
    processDataPushEvent(data);
    pFifo->push(data);
  }
}
