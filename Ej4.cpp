#include <iostream>
#include <vector>
using namespace std;
int max(/*const vector<int>& a*/int a[],int n);
int main(){
    int n;
cout<<"ingrese el tamanio del vector"<<endl;
cin>>n;
//vector<int> arreglo(n);
int arreglo[n];
cout<<"Ingrese los elementos del vector"<<endl;
    int h;
    for (int i = 0; i < n; ++i) {
        cin>>h;
        arreglo[i] = h;
    }

//arreglo.push_back(h);
cout<<"el elemento mas grande del vector es: "<<max(arreglo,n);
}
int max(/*const vector<int>& a*/int a[],int n){
    if(n == 1){
        return a[0];
    }
    int maxNum = max(a, n-1);
    if(a[n-1] > maxNum)
    {
return a[n-1];
    }else
    {
return maxNum;
    }
}