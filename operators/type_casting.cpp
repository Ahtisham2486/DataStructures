// type casting //
// converting the one data type to another data type  //
#include<iostream>

#include<string>
using namespace std ;

int main ()
{
    float TeaPrice = 49.99;
    int roundedTeaPrice = (int)TeaPrice;
     int TeaQuantity = 2; 
     int TotalPrice = TeaPrice*TeaQuantity;
     cout<< TotalPrice<< endl;
    cout<<roundedTeaPrice<<endl;

return 0 ; 
}

