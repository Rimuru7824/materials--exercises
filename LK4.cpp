#include <iostream>
using namespace std;
int a[100];
int n,k,i;
void xuat()
{
    for (int i = 0; i < n; i++)
    {
        if(a[i] < a[i+1])
        {
            for(int j=0;j<n;j++)
            {
                cout << a[j];
            }
            cout << " ";
            break;
        }
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n;
    for(int i=0;i<n;i++)
    {
        a[i] = 0;
    }
    lk(0);
    return 0;
}