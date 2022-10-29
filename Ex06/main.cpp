#include <iostream>

using namespace std;

int contaPares(int n, int vet[]){

if(n == 1){
        if(vet[0] % 2 == 0){
   return 1;
        }
}

else{
        if(vet[n-1] % 2 == 0){
                return contaPares(n-1, vet) + 1;
        }
        else{
            contaPares(n-1, vet);
        }
}


}

int main()
{
    int vet[4] = {10, 6 , 1, 2};
    cout << contaPares(4, vet);
    return 0;
}
