#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
string s;
int k, i;
int count = 0;
void xuat()
{
    for (int i = 0; i < 4; i++)
    {
        cout << s[i];
    }
    cout << endl;
    count++;
}
void permutation(int i)
{
    for (char j = 'A'; j <= 'F'; j++)
    {
        s[i] = j;
        if (i == 3)
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
    permutation(0);
    cout << endl << count;
    return 0;
}
