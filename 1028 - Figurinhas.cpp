#include <iostream>
using namespace std;


int main() {
	int Casos, F1, F2, Resto;
	cin >> Casos;
	int V[Casos];
	for(int i=0; i <  Casos; i++){
		cin >> F1 >> F2;

		Resto=F1%F2;
              while(Resto!=0)
              {
                  F1    = F2;
                  F2   = Resto;
                  Resto = F1%F2;
              }
              V[i] = F2;
	}

	for (int i = 0; i < Casos; i++)
		cout << V[i] << endl;
	return 0;

}
