#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main(int argc, char** argv) {
	int Tamanho, V[1000], i=0, Resultado[10000], Aux, ZZ=0;

	while(true){
		cin >> Tamanho;
		if(!cin)
			break;
		int V[Tamanho];
		for(i = 0; i < Tamanho; i++){
			cin >> V[i];
		}
		  sort(V, V + Tamanho);
		for(i =0;i < Tamanho; i++){
			Aux = V[i];
			Resultado[ZZ] = Aux;
			ZZ++;
		}
    }
    for(i=0;i<ZZ;i++){
        printf("%04d\n", Resultado[i]);
		}

	return 0;
}
