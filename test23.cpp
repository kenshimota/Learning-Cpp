#include <iostream>

using namespace std;

class Test{
	
	private:
		int calification;
	
	public:
		
		//constructor de la instancia
		Test(){
			cout << "Aqui ya se hizo la instancia " << endl;
		}
		
		//destructor de la instacia
		~Test(){
			cout << "Aqui termina la instancia... " << endl; 
		}
};

int main(){
	
	Test instance;
	
	/* Mientras no termine la funcion la instacia seguira en ejecución */
	
	return 0;
}

// al terminar la funcion la instacia sera destruida                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
