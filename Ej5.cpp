#include <iostream>
using namespace std;
bool encontrar(int n, int d);

int main(){

}
bool encontrar(int n, int d){
    if(n == 0){
        return false;
    }if(n%10 == d){
        return true;
    }
    return encontrar(n/10,d);
}
