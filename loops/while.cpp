#include<iostream>
using namespace std;
int main(){
int teaCups;
cin>> teaCups;
cout<<"Enter the number of tea cups to be served:";
//while lopps//
while(teaCups>0){
    teaCups--;
    cout<<"serving a cup of tea: \n"<< teaCups<< "remaining are :"<<endl;
    
}
cout<< " All cups are served"<<endl;
return 0;
}