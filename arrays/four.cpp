              //pointers//



#include<iostream>

#include<string>

using namespace std;
int* preparechaiorders(int cups){
    int* orders = new int [cups];
    for(int i=0 ;i<cups; i++){//takes input of array or forms an array ;
        orders[i]=(i+1)*10;
    }
    return orders;
}


int main(){
    int cups=5;
    int* chaiorder=preparechaiorders(cups);
    //read an array 
    for (int i=0 ;i<cups ; i++){
        cout<<"cups"<<i+1<<"has"<<chaiorder[i]<<"ml\n";
    }
return 0; 
} 