#include <iostream>
using namespace std;
int main()
{
	int Opcao, Alcool=0, Gasolina=0, Diesel=0;
	while(true){
		cin >> Opcao;
	switch(Opcao){
		case 1:
		Alcool++;
		break;
		case 2:
		Gasolina++;
		break;
		case 3:
			Diesel++;
			break;
		case 4:
			break;
	}
		if(Opcao==4){
			break;
		}
	}
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << Alcool<< endl;
	cout << "Gasolina: " << Gasolina<< endl;
	cout << "Diesel: " << Diesel << endl;

    return 0;
}
