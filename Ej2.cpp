#include <iostream>
using namespace std;
int sumaRecursiva(int num);
int main() {
int n=5;
    cout << sumaRecursiva(n)<< endl;

    return 0;
}
int sumaRecursiva(int num){
    if (num == 1) {
        std::cout<< "1 = ";
        return 1;
    }else{
        std::cout<<num<<" + ";
        return num + sumaRecursiva(num-1);
    }
}
