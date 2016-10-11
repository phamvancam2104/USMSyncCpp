class System {
	part Browser browser;
	part DNS1 dns1;
	part DNS2 dns2;
	//static configuration
	configuration {
		bindPorts(browser.pIConnect, dns1.pIConnect); 
	}
	//start system
	void run() {
		//
		
		//dynamic change of system connectors
		bindPorts(browser.pIConnect, dns2.pIConnect);
	}
}
