#include <iostream>
#include <math.h>
using namespace std;
int sum=0;
bool prime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}
int check(int n)
{
    while(n>1)
    {
        sum += n% 10;
        n /= 10;
    }
    sum = prime(sum);
    return sum;
}
int main()
{
    freopen("infile","r",stdin);
    freopen("outfile","w",stdout);
    int n;
    cin >> n;
    if(n==1)
    {
        cout << "2 3 5 7" << endl;
    }else
    {
        for(int i = pow(10,n-1); i < pow(10,n);i++)
        {
            int x = prime(i);
            int y = check(i);
            if(x==y && x==1)
            {
                cout << i << " ";
            }
        }
    }
    return 0;
}