#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    for(int i=0;i<s.length()-1;i++)
    {
        cout << s[i] << ", " ;
    }
    cout << s[s.length()-1];
    return 0;
}
