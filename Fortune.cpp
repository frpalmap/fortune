//Programa de la fortuna en C++
#include <iostream>
using namespace std;

int main(){
    //Programa de la fortuna
    int date, time, calendarYear, calendarMonth, calendarDateAndMonth, calendarDate, calendarTime;
    int hour, minute, hash;
    cout<<"Give date and time DDMMYYYY and HHMM";
    cin>>date>>time; //Para usar mas abajo
    calendarYear=date%10000; // ejemplo 22072014%10000=2014 (why?)
    calendarDateAndMonth=date/10000; // 22072014/10000=2207
    calendarMonth=calendarDateAndMonth%100;
    calendarDate=calendarDateAndMonth/100; //2207/100=22

    if((calendarDate>31)||(calendarDate<1)||(calendarMonth<1)||(calendarMonth>12)||(calendarYear<2014)){
        cout << "Bad date input" << endl; return -1;
    }
    //Aqui falta
    //Hora 1345

    hour=time/100; //1345/100=13
    minute=time%100; // 1345%100=45

    if ((hour<0)||(hour>23)||(minute<0)||(minute>59)){
        cout<<"Bad time input" <<endl; return -1;
    }
    //Mas codigo viene Aqui

    //Imprimir saludos

    if((6<=hour)&&(hour<12)){
        cout<<"Good Morning!"<<endl;
    }
    else{
        if((12<=hour)&&(hour<=18)){
            cout<<"Good afternoon!"<<endl;
        }
        else{cout<<"Good evening!"<<endl;}
    }
    //Faltaaaaaaa aun

    hash=(date+time)%3; //Obtenemos un valor del 0 al 2
    switch(hash){
        case 0: cout<<"Valar morghulis" <<endl; break;
        case 1: cout<<"Valar Dohaeris" <<endl; break;
        default: cout<<"A Lannister always pays his debt" <<endl; break;
    }
    return 0;
}