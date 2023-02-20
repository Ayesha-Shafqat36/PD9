#include <iostream>
using namespace std;
main()
{
    string s_1;
    string s_2;
    cout << "Enter string:";
    getline(cin,s_1);
    cout << "Enter string:";
    getline(cin,s_2);
    int idx=0;
    for (int i = 0; i < s_1.length(); i++)
    {
        for (int j = 0; j < s_2.length(); j++)
        {
            if (s_1[i] == s_2[j])
            {
                idx++;
                s_2[j]='\0';
                break;
            }
        }
    }
    cout << idx ;
}