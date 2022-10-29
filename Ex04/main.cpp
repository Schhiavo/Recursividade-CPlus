#include <iostream>

using namespace std;

float soma(int n, float vet[]){
if(n == 1){
    return vet[0];
}
else{
    return vet[n-1] + soma(n - 1, vet );
}
}

int main()
{
    float vet[5] = {1,2,3,4,5};
    cout << soma(5, vet);
    return 0;
}
