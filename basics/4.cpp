#include<iostream>
using namespace std;
int main (){
    printf("Enter any postive number: ");
    int n;
    cin>>n;
        for(int i=0; i<n;i++){
            for(int j=0;j<n-i-1; j++){
                cout<<" ";
        } 
            for (int j=0; j< 2*i+1; j++){
                cout<<"*";
            }
            for (int j =0;j<n-1;j++){
                cout<<" ";
            } cout<< endl;
    } cout<<endl;
    // // int n = 3;/
    // for(int i=1;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    return 0;
}