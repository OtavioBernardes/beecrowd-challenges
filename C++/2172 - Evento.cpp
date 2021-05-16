#include <iostream>

using namespace std;
int main() {
	int AumentoXP, MostroXP, MostroXPAumentado[10000000], i=0;
	while(cin >> AumentoXP >> MostroXP){
		if(AumentoXP == 0 && MostroXP ==0 )
			break;
			
	MostroXPAumentado[i] = AumentoXP * MostroXP;
	i++;
	}
	
	for(int j=0; j < i; j++){
		cout << MostroXPAumentado[j] << endl;
	}
	
	return 0;
}
