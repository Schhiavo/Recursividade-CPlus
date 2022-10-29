#include <iostream>

using namespace std;

void imprimeDecrescente(int n){

if(n == 0){
  cout << 0 << endl;
}
else{
    cout << n << endl;
    imprimeDecrescente(n-1);
}
}
int main()
{
    imprimeDecrescente(10);
    return 0;
}
