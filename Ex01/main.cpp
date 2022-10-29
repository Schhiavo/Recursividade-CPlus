#include <iostream>

using namespace std;

int fatorial(int n){
if(n == 1){
    return 1;
}
else{
    return n * fatorial(n-1);
}

}
int main()
{
    cout << fatorial(6);
    return 0;
}
