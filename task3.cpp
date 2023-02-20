#include <iostream>
using namespace std;
main()
{
    bool flag;
    string name;
    cout << "Enter name:";
    getline(cin,name);
    int idx=0;
    while (name[idx] != '\0')
    {
        idx++;
    }
    cout << "Character " << idx << endl;
    if (idx%2 == 0)
    {
        flag = true;
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