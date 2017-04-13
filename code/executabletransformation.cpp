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
