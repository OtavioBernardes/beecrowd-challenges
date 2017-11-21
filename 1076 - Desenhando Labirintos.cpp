#include <iostream>

const int MaxTAM = 49;
int Vertices, Arestas, Cont=0, L[MaxTAM], Resultado=0, Adj[49][49];

void ResetarMAX(int Ver){
	 for (int i=0; i<Ver; i++) {
        for (int I=0; I < Ver; I++) {
             Adj[i][I]=0;
        }
    }
}

void Total (int Comeco) {
    L[Comeco] = Cont++;
    for (int I = 0; I < Vertices; I++) {
           if (Adj[Comeco][I] == 1) {
            if (L[I] == -1) {
                Resultado++;
                Total(I);
            }
        }
    }
}

using namespace std; 
int main(){
	int  Posicao1, Posicao2, Comeco, NumeroCasos;
	cin >> NumeroCasos;
    for(int K=0; K < NumeroCasos; K++) {
    cin >> Comeco >> Vertices;
    	ResetarMAX(Vertices);	
    cin >> Arestas;
    
	  for (int i=0; i< Arestas; i++) {
            cin >> Posicao1 >> Posicao2;

            Adj[Posicao1][Posicao2]=1;
            Adj[Posicao2][Posicao1]=1;	
    }
       Resultado=0;
    	for (int A = 0; A < Vertices; A++) {
        L[A] = -1;
    	}
    	
	Total(Comeco);
	int ResultadoFinal = Resultado * 2;
    cout << ResultadoFinal << endl;
    }
	return 0;
}
