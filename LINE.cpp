#include <bits/stdc++.h>
using namespace std;
const int x = 1e4;
int a[x][x];
const int y = 1e5;
int cnt[y];
int main()
{
    freopen("LINE.INT","r",stdin);
    fropen("LINE.OUP"."w",stdout);
    long long n, m;
    int k=0;
    cin >> n >> m >> k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
            cnt[a[i][j]]++;
        }
    }
    sort(cnt+0,cnt+100000,greater<int>());
    int sum =0;
    for(int i=0;i<k;i++)
    {
       sum += cnt[i];
    }
    cout << sum;
    return 0;
}