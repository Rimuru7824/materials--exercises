#include <iostream>
using namespace std;
int a[100];
int n,i,k;
int count=0;
void xuat()
{
    bool check = true;
    for (int i = 0; i < n; i++)
    {
        if(a[i] < a[i+1])
        {
            check = false;
            break;
        }
    }
    if(check == true)
    {
        count++;
        for(int i=0;i<n;i++)
        {
            cout << a[i];
        }
        cout << " ";
    }
}
void lk(int i)
{
    for(int j=0;j<2;j++)
    {
        a[i] = j;
        if(i==n-1)
        {
            xuat();
        }else
        {
            lk(i+1);
        }
    }
}
int main()
{
    freopen("input.txt","r",stdin);
    freopne("output.txt","w".stdout);
    cin >> n;
    for(int i=0;i<n;i++)
    {
        a[i] = 0;
    }
    lk(0);
    cout << endl << count ;
    return 0;
}