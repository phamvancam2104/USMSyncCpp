class System {
	part Producer p;
	part Consumer c;
	part FIFO fifo;
	//static configuration
	configuration {
		bindPorts(p.pPush, fifo.pPush); 
		bindPorts(c.pPull, fifo.pPull); 
	}
}
