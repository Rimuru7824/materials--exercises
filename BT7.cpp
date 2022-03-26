#include <iostream>
#include <string.h>
using namespace std;

int main()
{
   freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    cin >> s;
    int sum =0;
    for(int i=0;i<s.length();i++)
    {
        sum += (int)s[i]-48 ;
    }
    cout << sum;
    return 0;
}
