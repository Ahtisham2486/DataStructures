
// program to take input from user ;//
#include<iostream>
#include<string>
using namespace std;
int main()
{
    string UserTea;
    string TeaQuantity;
    cout<<"what tea would you like to have ?\n";
    getline(cin, UserTea);
    // ask for quantity //
    cout<<"how many cups of " << UserTea  << " would you like to have?:\n";
    cin>> TeaQuantity ;
    cout << UserTea<< endl;
    
    cout << TeaQuantity<< endl;
    
    return 0 ;


}