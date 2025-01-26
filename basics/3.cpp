#include <iostream>
using namespace std;
int main (){
    int n;
    cin>>n;
    bool isprime = true ;
    for (int i=2 ; i*i<n ;i++){
        if (n%i==0){
            isprime=false;
            break; } 
    }
    if (isprime==true)   {
            cout<<"prime no:";
        }
    else{
            cout<< "not a prime numner"<< endl;
            }

    
return 0;  
}