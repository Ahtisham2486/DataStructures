#include<iostream>

using namespace std;
int main()
{ bool isStudent;
int cups;
cout<<"Are you a student(1 for yes and o for no)";
cin>> isStudent;
cout<< "how many cups of tea have you purchased";
cin>>cups;
    if(isStudent||cups>15){
        cout<<"you are eligible for discount "<< endl;
    }
    else{
        cout<<"You are not eligible for a discount"<< endl;
    }
    return 0 ;
}
