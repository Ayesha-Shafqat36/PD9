#include <iostream>
using namespace std;
main()
{
    bool flag;
    string element[4];
    for(int i=0; i<4 ; i++)
    {
        cout << "Enter Element:";
        cin >> element[i];
        if(element[0] == element[1] && element[1] == element[2] && element[2] == element[3] &&element[3] == element[0])
        {
            flag=true;
        }
        
    }
    if (flag == true)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
}