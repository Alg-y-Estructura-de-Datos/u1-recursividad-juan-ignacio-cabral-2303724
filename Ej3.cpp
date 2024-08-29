#include <iostream>
using namespace std;
void invertir(int n);
int main() {
int n=12;
    invertir(n);

    return 0;
}
void invertir(int n){
    if(n<10 && n>0){
        cout<< n;
    }
        else if(n<0) cout<<"error, ingrese un num positivo";
    else{
        cout<<n%10;
        invertir(n/10);
    }
}
/* if(a==0){
        return;
    }else if(a<0){
        std::cout<<"Ingrese un num positivo\n";
    }else{
        invertido = invertido * 10 + a % 10;
//        std::cout<<a%10;
        invertir(a/10,invertido);
    }*/