#include <iostream>

using namespace std;

void imprimeIntervalo(int a, int b, int inc){
if(a < b){
    cout << a << endl;
    imprimeIntervalo(a+inc, b, inc);
}
}

int main()
{
    imprimeIntervalo(1, 8, 2);
    return 0;
}
