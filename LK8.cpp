#include <iostream>
using namespace std;
int n = 5, k = 3, i = 1;
int a[100] = {1, 2, 3, 4, 5};
int c[10];
int count = 0;
void result()
{
    for (int i = 1; i <= k; i++)
    {
        cout << a[i];
    }
    cout << endl;
    count++;
}
void process(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (c[j] == false)
        {
            a[i] = j;
            if (i == k)
            {
                result();
            }
            else
            {
                c[j] = true;
                process(i + 1);
                c[j] = false;
            }
        }
    }
}
int main()
{
    freopen("output.inp", "w", stdout);
    for (int i = 1; i <= n; i++)
    {
        c[i] = false;
    }
    process(1);
    cout << count;
    return 0;
}