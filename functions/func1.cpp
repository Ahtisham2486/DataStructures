#include<iostream>
using namespace std;
int checktemperature(int temperature){
    return temperature;
}
//decleration of function //
void servechai(int cups);

void makechai(){
    cout<<"boilingwater\n""adding tea leaves\n""straining\n";
}



void servechai(string teaType){
cout<< "serving"<< teaType<<endl;
}

int main()
{
    int temp= checktemperature(50);
    cout<<temp<<endl;
    servechai(6);
  //  makechai();//calling a function
   servechai("my chai");
    return 0;
}
//defination of function //
void servechai(int cups)
    {
        cout<<"serving"<<cups<<"cups of chai\n";
    }