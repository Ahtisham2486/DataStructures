#include <iostream>
#include <vector>
using namespace std;
class chai{
    public:
    string teaName ;
    int servings;
    vector<string> ingredients;


    void displaychaidetials(){
        cout<< "Tea name "<<teaName<<endl;
        cout<<"servings"<< servings<< endl;
        cout<<" ingredients:";
            for (string ingredient:ingredients){
                cout << ingredient << "";
            }
            cout<< endl;
    }
};

 int main (){
    chai chaiOne;
    chaiOne.teaName=" lemon tea";
    chaiOne.servings = 2;
    chaiOne.ingredients ={"water", "lemon ", "honey", "tea"};
    chaiOne.displaychaidetials();


 chai chaitwo;
    chaitwo.teaName= " masala chai";
    chaitwo. servings = 4;
    chaitwo.ingredients={"water","tea","ginger"};
    chaitwo.displaychaidetials();
    return 0;

 }