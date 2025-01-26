#include <iostream>
#include <string>
#include <vector>
using namespace std;
class chai{
    public:
    string teaName ;
    int servings ;
    vector<string>ingredients ;

    chai(string name ,int serve , vector<string> ingr)
    {
        teaName=name;
        servings = serve ;
        ingredients=ingr;
        cout<<"constructer is called "<< endl;
    }
void displayshaidetials(){
    cout<<"tea name "<< teaName <<endl;
    cout<<"no . of servings  "<< servings  <<endl;
    cout<<"ingredients :";
    for(string ingrident: ingredients ){
        cout<< ingrident <<"";
    }
    cout<<endl;
}
};
int main (){
    chai lemontea ("lemontea",2, {"water\n","tea\n" , "honey"});
    lemontea.displayshaidetials();
    return 0;
}