#include<iostream>
using namespace std;
int totalchaiserved(int chai[], int size){
    int total=0;
    for(int i=0; i<size; i++){
        total +=chai[i];
}
    return total;
}
 int main(){
    int chaiserved[7]= {50 , 60, 55,70,65,80,75};
    int total = totalchaiserved (chaiserved,7);
    cout << "Total chai served in the week :"<< total <<endl;
    return 0 ;
}