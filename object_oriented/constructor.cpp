#include<iostream >
#include<string>
#include<vector>
// defualt constructor/
using namespace std;
class chai{
    public:
    string teaName;
    int servings;
    vector <string> ingredients;
    chai(){
        cout<<"constructor is called "<<endl;
    }
    void displaychaidetials (){
        cout<<"teaname"<<teaName<<endl;
        cout<<"servings"<<servings<<endl;
        cout<<"ingredients :";
            for (string ingredient : ingredients)
            {
            cout<<ingredient<< "";
            }cout<< endl;
    } 
};
 
  int main (){
    chai mychai;
    mychai.teaName= "lemon tea";
    mychai. servings = 2;
    mychai. ingredients={
        "water", "tealeaves",
    };
    mychai.displaychaidetials();
    return  0;
  }