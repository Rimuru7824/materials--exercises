#include <iostream>
using namespace std;
int a[100];

void quicksort(int l, int r)
{
    int i = l;
    int j = r;
    int k = a[ (l + r) / 2];
    while (i <= j)
    {
        while (a[i] < k)
        {
            i++;
        }
        while (a[j] > k)
        {
            j--;
        }
        if (i <= j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    if (l < j)
    {
        quicksort(l, j);
    }
    if (r > i)
    {
        quicksort(i, r);
    }
}
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}