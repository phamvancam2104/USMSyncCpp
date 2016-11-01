class PriorityQueue : public IPush, IPull {
	port pPush {
		provides IPull;
	}
	port pPush {
		provides IPush;
	}
	//methods implementation
}
void dynamic() {
	PriorityQueue prioQueue = new PriorityQueue();
	bindPorts(p.pPush, prioQueue.pPush); 
	bindPorts(c.pPull, prioQueue.pPull); 
}
