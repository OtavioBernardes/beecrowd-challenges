#include <iostream>
using namespace std;
int main()
{
    int Idade,Total=0;
    double Media,i=0;
    while(true){
        cin >> Idade;
        if(Idade<0)
            break;
        else
        {
         Total= Total + Idade;
         i++;
        }
    }
    Media=Total/(float)i;
    printf("%.2lf\n",Media);
    return 0;
}
