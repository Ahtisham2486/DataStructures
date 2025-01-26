#include<iostream>
using namespace std;

// pass by value and pass by refrence //
/*void pourchai(int cups){
    cups=cups +5;
    cout<<"Poured cups:"<<cups<<endl;
}
int main(){
    int cups = 5;
    pourchai(cups);
    cout<<"Total chai cups are "<< cups<<endl;
    return 0;
}
*/
// pass by refrence // only apply & sing before parameters it will be pass by refrence function//
void pourchai(int &cups){
    cups=cups +5;
    cout<<"Poured cups:"<<cups<<endl;
}
int main(){
    int cups = 5;
    pourchai(cups);
    cout<<"Total chai cups are "<< cups<<endl;
    return 0;
}
