#include <iostream>
#include <math.h>
using namespace std;


int main() {
	int N;
		
	cin >> N;
	int Print[N];
	for(int i=1; i <= N; i++){
		if((i % 2) == 0){
			Print[i] = pow(i, 2);
		}
	}
	for(int i=1 ; i<= N ; i++)
		if((i % 2) == 0){
			cout << i << "^2" << " = " << Print[i] << "\n";
	}
}
