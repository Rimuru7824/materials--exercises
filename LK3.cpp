#include <iostream>
using namespace std;
int n, k, i;
int a[100];
void xuat()
{
    for (int i = 0; i < k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void permutation(int i)
{
    for (int j = 0; j < 2; j++)
    {
        a[i] = j;
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    cin >> n ;
    k=n;
    for(int i=0;i<n;i++)
    {
        a[i] = 0;
    }
    permutation(0);
    return 0;
}