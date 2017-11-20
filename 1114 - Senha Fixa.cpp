#include <iostream>
using namespace std;
int main() {
	while(true){
		int Senha;
		cin >> Senha;
			if(Senha == 2002){
				cout << "Acesso Permitido" << endl;
					break;
			}else{
				cout << "Senha Invalida" << endl;
			}
	}
	return 0;
}
