#include<iostream>
#include<string>
using namespace std;
int main(){
    float price;
    int choice;
    cout << "1. lemon tea\n";
    cout << "2. garlic tea\n";
    cout << "3. oolong tea\n";
    cout << "4. lipton tea\n";
    cout << "5. ginger tea\n";
    cout << "enter your choice in number \n";
    cin>>choice;
    switch (choice){
        case 1 : 
        price = 2.0 ;
        cout << "price = "<<price << endl;
        cout << "you ordered lemon tea\n"<<endl;
        break;
        case 2 :
        price = 3.25;
        cout << "price = "<<price << endl;
        cout<<" you ordered garlic tea\n"<<endl;
        break;
        case 3 :
        price = 10.85;
        cout << "price = "<<price << endl;
        cout << "you ordered oolong tea\n"<<endl;
        break;
        case 4 :
        cout << "price = "<<price << endl;
        price = 10.0;
        cout<< "you ordered lipton tea\n" << endl;
        break;
        case 5:
        
        price = 115;
        cout << "price = "<<price << endl;
        cout << "you ordered ginger tea\n" << endl;
        break;



    }
    return 0;

    
}