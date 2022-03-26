#include <bits/stdc++.h>
using namespace std;

int cp(int n) {
    int x = sqrt(n);
    if (x * x == n) return 1;
    return 0;
}
int UD(int n) {
    int sum=0;
    for (int i = 2; i <sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            int x = n/i;
            sum += x;
        }
    }
    if (cp(n) == 1) sum += sqrt(n);
    return sum;
}
void p2(int n)
{
    for(int i=4;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            int x = UD(i);
            int y = UD(j);
            if(x==y && x != 0)
            {
                cout << i << " sae " << j << endl;
            }
        }
    }
}     

int main()
{
    freopen("input.inp","r",stdin);
    freopen("output.inp","w",stdout);
    // phần 1 
    int n, m;
    cin >> n >> m;
    int N;
    cin >> N;
    int x = UD(n);
    int y = UD(m);
    if(x==y)
    {
        cout << "YES" << endl;
    }else
    {
        cout << "NO" << endl;
    }
    // phần 2 
     p2(N);
    return 0;
}
