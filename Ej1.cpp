#include <iostream>
using namespace std;
int potencia(int base, int exponente);
int main() {

    cout <<"Ingrese la base"<< endl;
    int base;
    cin>>base;
    cout<<"Ingrese el exponente"<<endl;
    int exponente;
    cin>>exponente;
    cout<<"La potencia es:"<<potencia(base,exponente);

    return 0;
}
int potencia(int base, int exponente){
    if(exponente==0)
    {
        return 1;
    }
    else{
        return base * potencia(base,exponente-1);
    }
}
