#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
    vector <string> croatia = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
    int index;
    string s;
    cin >> s;
    
    for (int i = 0; i < croatia.size(); i++)
    {
        while(1)
        {
            index = s.find(croatia[i]);
            if (index == string::npos)
                break;
            s.replace(index, croatia[i].size(), "*");
        }
    }
    cout << s.length();
    return 0;
}