#include <bits/stdc++.h>
using namespace std;

bool prime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i =2;i <= sqrt(n);i++)
    {
        if(n % i ==0)
        {
            return false;
        }
    }
    return true;
}

int Sum(long n)
{
    int sum1 =0;
    while(n>1)
    {
        int x = n %10;
        sum1 += x;
        n /= 10;
    }
    return sum1;
}

int Prime(long n)
{
    int sum = 0;
    for(int i=2;i<=n;i++)
    {
        while(n % i==0)
        {
            if(i>9)
            {
                sum += Sum(i);
            }else{
                sum += i;
            }
            n /= i;
        }
    }
    return sum;
}

int main()
{
    freopen("SPNUM.INP","r",stdin);
    freopen("SPNUM.OUP","w",stdout);
    long n;
    cin >> n;
    n ++;
    while(n>=0)
    {
        if(prime(n))
        {
            n++;
        }
        int x = Prime(n);
        int y = Sum(n);
        if(x == y)
        {
            cout << n;
            break;
        }
        n++;
    }
    return 0;
}
