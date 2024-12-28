#include<iostream>
using namespace std;
int main(){//inicio main

    int edad, opcion;

    do{

    cout<<"Ingrese su edad"<<endl;
    cin>>edad;
    if(edad <=0 || edad >= 100){
        cout<<"Igrese su edad"<<endl;
    }
     } while(edad <=0 || edad >= 100);

    if(edad < 18){
        cout<<"Usted es menor de edad"<<endl;
    }else{
        cout<<"Bienvenido"<<endl<<endl;
        cout<<"Menu"<<endl;
        cout<<"Opcion 1"<<endl;
        cout<<"Opcion 2"<<endl;

        do{
        cout<<"Elija una opcion del menu"<<endl;
        cin>>opcion;
        if(opcion <1 || opcion >2){
            cout<<"Elija solo opciones validas"<<endl;
        }
        }while(opcion <1 || opcion >2);

            switch(opcion){
                case 1:
                cout<<"Hola mundo"<<endl;
                break;
                case 2:
                cout<<"Chao mundo"<<endl;
                break;
            
            }
        }
    
    
    
    return 0;
}// fin main