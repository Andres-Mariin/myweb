#include<iostream>
#include<string>
using namespace std;

int main(){//inicio main

    int edad, opcion, dia, mes, year;
    int numero1, numero2, operacion;
    char seccion;
    
    do{
        string meses[]={"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiempre", "octubre", "noviembre", "diciembre"};

    cout<<"Ingrese su fecha de nacimiento dia, mes, year"<<endl;
    cin>>dia >>mes >>year;
    edad = 2025-year;
    if(edad <=0 || edad >= 100){
        cout<<"Igrese su edad valida"<<endl;
    }else{
        cout<<dia<<" "<<meses[mes-1]<<" "<<"del"<<" "<<year<<endl<<endl;
        cout<<"You are"<<" "<<edad<<" "<<"years old"<<endl;
    }
     } while(edad <=0 || edad >= 100);

    if(edad < 18){
        cout<<"Usted es menor de edad"<<endl<<endl;
        cout<<"le gustaria naver la seccion -18? Y - N"<<endl;
        cin>>seccion;
        if(seccion == 'y'){
            cout<<"1 SUMA"<<endl;
            cout<<"2 RESTA"<<endl;
            cout<<"3 MUNLTIPLICACION"<<endl;
            cout<<"4 DIVISION"<<endl;
            cout<<"Elija una opcion"<<endl;
            cin>>opcion;

            switch(opcion){
                 case 1:
            cout<<" Vamos a sumar!!"<<endl;
            cout<<"Ingresa dos numeros"<<endl;
            cin>>numero1;
            cin>>numero2;
            operacion = numero1 + numero2;
            cout<<"el resultado de la suma es "<<operacion<<endl;
            break;

            case 2:
                cout<<" Vamos a restar!!"<<endl;
                cout<<"Ingresa dos numeros"<<endl;
                cin>>numero1;
                cin>>numero2;
                operacion = numero1 - numero2;
                cout<<"el resultado de la resta es "<<operacion<<endl;
            break;

            }
        
        }


    }else{

        if(edad >=18 && edad <=25){
        cout<<"Hey brother!!"<<endl<<endl;
        }else{
            cout<<"Bienvenido caballero."<<endl<<endl;
        }
    
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