#include<iostream>
using namespace std;
int main(){

    int numero;

    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    if(numero<18){
        cout<<"menor de edad"<<endl;
    }else{
        cout<<"mayor de edad"<<endl;
    }

    return 0;
}