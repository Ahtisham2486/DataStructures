#include <iostream>
using namespace std;
int main()
{
    // decleration of variables and print different data types ;
    int teaLeaves = 50 ;
    float waterTemperature = 85.5565;
    double PriceOfTea= 299.08;
    char teaGrade ='A'; 
    bool IsteaReady = false;
    cout<< teaLeaves<<endl;
    cout<< waterTemperature<<endl;
    cout<<PriceOfTea<<endl; 
    cout<< teaGrade<<endl;
    cout<< IsteaReady<<endl;

     unsigned SmallTeaPack = -100; // stores garbage value here bcz of unsigned dt type 
     unsigned aSmallTeaPack = 500;

     cout << SmallTeaPack <<endl;
     cout << aSmallTeaPack << endl;

    long long TeaStorage = 100000000;
     cout<< TeaStorage << endl;
     short tea = 2;
     cout <<tea<< endl;
    return 0;
    
}