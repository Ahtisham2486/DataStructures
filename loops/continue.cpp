
// write a program by using keyword continue in your program // 
//question of this program is on notebook//
#include <iostream>
using namespace std;
int main(){
string teaTypes[]={"oolong tea ","orange tea","green tea","lemon tea","black tea"};

for(int i=0;i<5;i++){
    if (teaTypes[i]=="green tea"){
        //cout<< "skipping the "<<teaTypes[i]<<endl;
        continue;
    }


    cout<<" brewing of " <<   teaTypes[i]<<endl;
}




    return 0 ;
}
