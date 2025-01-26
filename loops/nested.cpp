#include <iostream>
using namespace std;
int main(){

string teaTypes[]={"oolong tea ","orange tea","green tea","lemon tea","black tea"};
for (int i=0;i<5;i++){

    for(int j=1; j<4;j++){
        cout<< "brewing of "<< j << " cup of tea"<<endl;
    }
    cout << "brewing of "<< teaTypes[i]<<endl;
}




return 0 ;
}