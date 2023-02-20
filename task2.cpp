#include <iostream>
using namespace std;
main()
{
    int discount;
    int After_Discount;
    string movie[5]={"Gladiator","StarWars","Terminator","TakingLives","TombRider"};
    string Movie_Name;
    cout << "Enter Movie name:";
    cin >> Movie_Name;
    int price=500;
    for(int i=0; i<5 ; i++)
    {
        if(i%2 != 0 && Movie_Name == movie[i])
        {
            discount=(500/100)*5;
            After_Discount=price-discount;
            cout << "Discount for odd movies = " << After_Discount;
        }
        if(i%2 == 0 && Movie_Name == movie[i])
        {
            discount=(500/100)*10;
            After_Discount=price-discount;
            cout << "Discount on Even movies = " << After_Discount;
        }
    }
}