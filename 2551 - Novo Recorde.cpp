#include <iostream>
using namespace std;
int main() {
	int VetorDia[365],DiaBatido=0, Dist,Tempo, N=0;
	float Media ,Recorde=0;

while (true) {
    std::cin >> N;
    if (!std::cin)
        break;
		for (int F=0;F<N;F++){
			scanf("%d",&Tempo);
			scanf("%d", &Dist);
			Media=((Dist*1000)/(float)(Tempo*60))*3.6;
			if (Media>Recorde){
				Recorde=Media;
				VetorDia[DiaBatido] = F+1;
				DiaBatido++;
			}
		}
Recorde = 0;
Media = 0;
Tempo=0;
Dist=0;

		}
				for(int FF=0;FF < DiaBatido;FF++){
				cout<< VetorDia[FF] << endl;
	}
		return 0;
}
