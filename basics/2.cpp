#include<iostream>
using namespace std ;
int main(){
    int age;
    cin>> age;
    if (age < 25){
        cout<< " you are not eligible for job";
    }
        else if (age>=25){
        cout<< "you are eligible for job";

        }
         else if (age >55 && age <= 69){
            cout<< "eligible but retirement is soon";
        }
        else if (age>70){
            cout<<" retired ";
        }
        return 0;
    }

