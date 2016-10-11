class IConnect1_IConnect2: public IConnect1, IConnect2 {
	void connect1();
	void connect2();
}
class Browser {
	IConnect1_IConnect2* pIConnect; 
	void test() {
		pIConnect->connect1(); //via IConnect1
		pIConnect->connect2(); //via IConnect2
	}
}
