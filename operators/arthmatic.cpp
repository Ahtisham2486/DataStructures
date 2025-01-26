#include <iostream>

using namespace std;
int main()
{
    int TeaCups;
    double TeaPrice, totalprice, discountedPrice;
    cout << " Enter the number of cups you need :" << endl;
    cin >> TeaCups;
    cout << " Enter the price per cup :" << endl;
    cin >> TeaPrice;
    totalprice = TeaPrice * TeaCups;
    // apply discount if total price is greater than 100;//
    if (totalprice > 100)
    {
        discountedPrice = totalprice - (totalprice * 0.05);
        cout << "discountedPrice is:" << discountedPrice << endl;
    }
    else
    {
        cout << totalprice << endl;
    }
    return 0;
}
