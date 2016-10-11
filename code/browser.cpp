class ICompute {
     void connect();
}

class Browser {
     port pIConnect {
          requires IConnect;
     }
}
