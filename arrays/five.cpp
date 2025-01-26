#include<iostream>

#include<string>

using namespace std;

int main()
{
  int chaisales[3][5]= {
  {50,35,65,35,24},
  {11,5,64,66,34},
  {75,4,55,35,23},
  };
  for(int i=0;i<3;i++)
  {cout <<"i am at shop :" << i+1<< "\n ";
    
    for(int j =0; j<5;j++)
    {
        cout<<chaisales[i][j]<<"cups\n";
    }
  }

   
 return 0 ;
}