class FIFO : public IPush, IPull {
	port pFifo {
		provides IPull;
		provides IPush;
	}
}
configuration {
	bindPorts(p.pPush, fifo.pFifo);
	bindPorts(p.pPull, fifo.pFifo);
}
