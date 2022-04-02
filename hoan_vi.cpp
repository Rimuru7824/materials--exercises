#include <iostream>
#include <string.h>
using namespace std;
string s = "ABCDEF" ;
string s1;
int k, i;
int count = 0;
void xuat()
{
    for (int i = 0; i < k; i++)
    {
        cout << s1[i];
    }
    cout << endl;
    count++;
}
void permutation(int i)
{
    for (int j = 0; j < s.length(); j++)
    {
        s1[i] = s[j];
        if (i == k-1)
        {
            xuat();
        }
        else
        {
            permutation(i + 1);
        }
    }
}
int main()
{
    freopen("output.txt", "w", stdout);
    k = s.length();
    k -= 2;
    permutation(i);
    cout << endl << count;
    return 0;
} 