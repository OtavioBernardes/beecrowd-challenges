#include <iostream>
#include <string.h>
using namespace std;

int main(){
	int N;
	while(1){
		cin >> N;
		if(N == 0 ) break;
		for(int i= 1 ; i<= N-1; i++){
			cout << i << " ";
		}
		cout << N << "\n";	
	}
}
