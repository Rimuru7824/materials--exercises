#include <iostream>
#include <string.h>
using namespace std;
int k,i;
string s;
int count=0;
void xuat()
{
    int x =0;
    for(int i=0;i<3;i++)
    {
        if(s[i] == 'A' || s[i] == 'E'|| s[i] == 'I' )
        {
            x++;
        }
    }
    if(x>0)
    {
        for(int i=0;i<3;i++)
        {
            cout << s[i];
        }
        cout << endl;
        count++;
    }
}
void LK(int i)
{
    for(char j = 'A' ; j <= 'I' ; j++ )
    {
        s[i] = j;
        if(i==2)
        {
            xuat();
        }else
        {
            LK(i+1);
        }
    }
}
int main()
{
    freopen("output.txt","w",stdout);
    LK(0);
    cout << endl << count ;
    return 0;
}