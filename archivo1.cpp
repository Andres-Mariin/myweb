#include<iostream>
using namespace std;
int main(){

    int numero, opcion;

    cout<<"ingrese un numero"<<endl;
    cin>>numero;
    if(numero<18){
        cout<<"menor de edad"<<endl;
    }else{
        cout<<"opcion 1"<<endl;
        cout<<"opcion 2"<<endl;
        cout<<"elija una opcion"<<endl;
        cin>>opcion;
        switch(opcion){
        case 1:
        cout<<"hola mundo"<<endl;
        break;
        case 2:
        cout<<"chao mundo";
        break;
        }

    }

    return 0;
}