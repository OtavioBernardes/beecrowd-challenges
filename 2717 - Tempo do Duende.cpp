#include <iostream>

using namespace std;
int main() {
	int Tempo, Presente1, Presente2;
	cin >> Tempo ;
	cin >> Presente1 >> Presente2;
	if(Tempo >= (Presente1+Presente2)){
		cout << "Farei hoje!\n";
	}else{
		cout << "Deixa para amanha!\n";
	}
	return 0;
}
