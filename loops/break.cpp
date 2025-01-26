#include<iostream>
#include<string.h>
using namespace std;
int main(){
string response;

    while(true){
        cout<<" Do you want more tea (type'stop') ?\n" ;
        cin>>response;
        if (response=="stop"){
            //exit the loop//
            break;
        }
        
        cout << "give them another cup of tea\n";
        
    }
    cout<<"no more tea will be served to you";

    return 0;
}