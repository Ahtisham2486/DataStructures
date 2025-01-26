#include<iostream>

using namespace std;
int main()
{ 
 int teabags;
  cout<<" Enter the number of tea bags you have assigned :"<< endl;
  cin >> teabags;
  if (teabags<=10){
    //teabags = teabags+5;
    teabags +=5;
    cout<< teabags << endl;
  }
  else {
    cout<< teabags<< endl;
  }

    return 0 ;
}
