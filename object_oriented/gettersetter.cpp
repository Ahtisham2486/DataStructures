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
        teaName ="\t unknown tea ";
        servings =  2 ;
        ingredients={"water\n","tealeaves\n","honey\n"};
    }
    // chai(string name , int serve , vector<string>ingr){
    //     teaName = name;
    //     servings = serve;
    //     ingredients = ingr ;

    // }


    // getter  string // 
     string getTeaName(){
        return teaName;
     }

     //settter//
     void setTeaName(string name ){
        //logic 
        teaName = name ;
        }
       // getter servings //
     int getServings(){
        
           return servings;
       }
        // setter servings //
        void setServings(int serve){
            servings=serve +2;
        }
        // getter  ingridients //
        vector<string> getIngredients(){
            return ingredients ;
        }

        // setter ingredients //
        void setIngredients(vector<string>ingr){
            ingr=ingredients;
    
        }
     
     void displaychaidetials (){
        cout<<"teaname:"<<teaName<<endl;
        cout<<"servings:"<<servings<<endl;
        cout<<"ingredients :";
            for (string ingredient : ingredients)
            {
            cout<<ingredient<< "";
            }
            cout<< endl;
    }
};

int main ()
{
    chai chai;
    chai.setTeaName("masala tea ");
    chai.getTeaName();
    chai.setServings(5);
    //chai.setIngredients();
    
    chai.displaychaidetials();
    
    
    return 0;
}
