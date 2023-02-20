#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array:";
    cin >> size;
    int num;
    cout << "Transformation need to be added:";
    cin >> num;
    int numbers[size];
    for(int i=0; i<size; i++)
    {
        cout << "Enter Number:";
        cin >> numbers[i];
        if(numbers[i]%2 == 0)
        {
            numbers[i]=numbers[i]-num*2;
        }
        if(numbers[i]%2 != 0)
        {
            numbers[i]=numbers[i]+num*2;
        }
    }
    cout << "{ ";
    for(int i=0; i<size; i++)
    {
        cout << numbers[i];
        cout << ", ";
    }
    cout << "} ";
}