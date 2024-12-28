#include<iostream>
using namespace std;
int main(){

    int edad, opcion;

    cout<<"Ingrese su edad"<<endl;
    cin>>edad;
    if(edad<18 && edad >0){
        cout<<"menor de edad"<<endl;
    }else if(edad <=0 || edad >= 100){
        cout<<"Ingrese solo valores validos"<<endl;
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