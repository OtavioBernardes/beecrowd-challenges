#include <iostream>
using namespace std;
int main() {

	int Max_Quest=0, Quest=0, ContinuarVerifi=0, Controle=0, ControleVetorFinal=0, Final[100], i;

while (true) {
    cin >> Max_Quest >> Quest;
    if (!cin)
        break;

  	int Quest_Nerd[Max_Quest], Quest_Respondidas[Quest];

		for(i=0; i < Max_Quest; i++){
			cin >> Quest_Nerd[i];
		}
			for(i=0; i < Quest; i++){
			cin >> Quest_Respondidas[i];
		}


			do{
			for(i=0; i < Quest; i++){
				for(int A=ContinuarVerifi; A < Max_Quest; A++){
					if (Quest_Respondidas[i] == Quest_Nerd[A]){
						Controle = 1;
						ContinuarVerifi = A;
						A = Max_Quest - 1;
						}else{
						Controle = 0;

					}
				}

			}
		}while(i < Quest);

		Final[ControleVetorFinal] = Controle;
		ControleVetorFinal++;

	ContinuarVerifi = 0;
	}
		for(i=0;i < ControleVetorFinal; i++){
			if(Final[i] == 1){
				cout << "sim" << endl;
			}else{
				cout << "nao" << endl;
			}
		}
			return 0;

}
