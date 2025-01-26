#include<iostream>
#include<string>
#include<vector>

using namespace std;
class chai{
    private:

    string teaName;
    int servings ;
    vector <string > ingredients ;
    public:
    chai(){
        string =" unknown tea ";
        servings = "2";
        ingredients={"water","tealeaves","honey"};
    }
    chai(string name , int serve , vector<string>ingr){
        teaName = name;
        servings = serve;
        ingredients = ingr ;

    }


    // getter  string // 
     string getTeaName(){
            return teaName;
     }

     //settter//
     void setTeaName(string name ){
        //logic 
        teaName = name ;
     }
    void displaychaidetials (){
        cout<<"teaname"<<teaName<<endl;
        cout<<"servings"<<servings<<endl;
        cout<<"ingredients :";
            for (string ingredient : ingredients)
            {
            cout<<ingredient<< "";
            }cout<< endl;
};

int main (){
    chai chai;
    chai.setTeaName("ginger tea ");
    
    
    return 0;
};
