#include <iostream>
using namespace std;
int main()
{
	float Nota,Media,NotaFinal=0, i=0, Fim=0;
    while(true)
    {
        if(i==2)
            break;
        cin >> Nota;
        if(Nota >=0 && Nota<=10)
        {
            i++;
            NotaFinal+=Nota;
        }
        else
        	Fim++;
    }
    for(int i=0; i < Fim; i++){
     cout << "nota invalida" << endl;
	}
    Media=NotaFinal/2.00;
    printf("media = %.2lf\n", Media);
    return 0;
}
