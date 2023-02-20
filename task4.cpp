#include <iostream>
using namespace std;
main()
{
    int size;
    bool flag;
    cout << "Enter size of array:";
    cin >> size;
    int numbers[size];
    for (int i=0; i<size; i++)
    {
        cout << "Enter number";
        cin >> numbers[i];
    
        while(numbers[i] != '\0')
        {
            int x;
            x=numbers[i]%10;
            if(x == 7 || numbers[i] == 7)
            {
            flag = true;
            }
            numbers[i]=numbers[i]/10;
        } 
    }
    if (flag == true)
        {
            cout << "Boom";
        }
        else
        {
        cout << "There is no seven no";
    }
}