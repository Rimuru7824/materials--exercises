#include <iostream>
using namespace std;
int n, k, i;
int a[100];
void xuat()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << " ";
}
void permutation(int i)
{
    for (int j = 1; j <= n; j++)
    {
        a[i] = j;
        if (i == k)
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
    cin >> n >> k;
    permutation(1);
    return 0;
}