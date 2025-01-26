#include<iostream>

using namespace std;
int main()
{ 
    int cups ;
    cout << "enter the no of tea cups costumer buyed:"<<endl;
    cin >> cups;
    if (cups >20){ cout<< " You got a GOLD Badge\n";

    }else if (cups>=10 && cups<=20){
        cout<< "you got a SILVER badge\n";
    }
    else{ 
        cout<< " welcome sir . you are a new costumer ";
    }
    return 0 ;
}
