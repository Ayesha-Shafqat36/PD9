#include <iostream>
using namespace std;
main()
{
    string fruit[4]={"peach","apple","guava","watermelon"};
    int price[4]={60,70,40,30};
    string F;
    int kg;
    int x;
    int TotalPrice;
    cout << "Enter name of Fruit:";
    cin>> F;
    cout << "Enter Quantity of fruit:";
    cin >> kg;
    for(int i=0; i<4; i++)
    {
        if(fruit[i]== F)
        {
            x=i;
           
        }
    }
    TotalPrice=kg*price[x];
    cout << "Total price " <<  TotalPrice;
}