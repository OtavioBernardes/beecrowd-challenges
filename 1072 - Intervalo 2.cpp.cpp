#include <iostream>
using namespace std;


int main() {
	int N, Dentro=0, Fora=0;
	
	cin >> N;
	int X[N];
	for(int i=0; i < N; i++){
		cin >> X[i];
		if(X[i] >= 10 && X[i] <= 20){
			Dentro++;
		}else{
			Fora++;
		}
	}
	
	cout << Dentro << " in\n";
	cout << Fora << " out\n";

}
