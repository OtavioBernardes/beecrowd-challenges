#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>

int main() {
	using namespace std;
	int for2, N, A, B, M,ff;
		struct exercicio{
	char Idioma[15], nome[100], Tradu[100], idi[100];
};
struct exercicio e[100];


	scanf("%d", &N);
 	cin.ignore(100,'\n');
		for(A=0;A < N;A++) {
		gets(e[A].Idioma);
		gets(e[A].Tradu);
	}

		cin >> M;
		cin.ignore(100,'\n');

		for(for2=0; for2 < M; for2++) {
		gets(e[for2].nome);
		if(for2 != 0) cout << endl;
		cout << e[for2].nome<< endl;;
		gets(e[for2].idi);
				for(B =0; B < N; B++){
				if(strcmp(e[for2].idi,e[B].Idioma) == 0){
				cout << e[B].Tradu<< endl;
						}
			}

		}

			   cout << endl;


	return 0;
}
