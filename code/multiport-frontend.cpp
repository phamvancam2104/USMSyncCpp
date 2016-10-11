class Browser {
	port pIConnect {
		requires IConnect1;
		requires IConnect2;
	}
	//call through pIConnect
	void test() {
		pIConnect->connect1(); //via IConnect1
		pIConnect->connect2(); //via IConnect2
	}
}
