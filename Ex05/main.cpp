#include <iostream>

using namespace std;

float menor(int n, float vet[]){
if(n == 1){
        return vet[n];
    }
else {
    if(vet[n-1] < menor(n-1, vet)){
        return vet[n-1];
    }
}
}



int main()
{
    float vet[3] = {20,10,4};
    cout << menor(3, vet);
    return 0;
}
