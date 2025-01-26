#include <iostream>
using namespace std;
int main(){
int cups;
cout << "Enter the number of cups ordered :";
cin>>cups;
if(cups>20){
    cout<< "You got a discount of 20 % to  your order";
}
    else if (cups>=10 &&  cups<=20 )
    {
        cout<<"you got a discount of 10%  to your order";
    }
else{
   cout<< "Buy some tea cups to avail the discount";
} 


 return 0;
}
