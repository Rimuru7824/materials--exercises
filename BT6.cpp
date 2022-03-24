#include <iostream>
#include <math.h>
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
int cau_c(int i, int k)
{
    int tmp =1;
    for(int j=0;j<k+1;j++)
    {
        tmp *= i;
    }
    tmp--;
    tmp /= (i-1);
    return tmp;
}
int main()
{
    int b = 1;
    int c = 1;
    unsigned long n;
    cin >> n; 
    const unsigned long N =n;
    // câu a
    for(int i=2;i<=N;i++)
    {
            int k=0;
            while(n%i==0 && prime(i) == 1)
            {
                k++;
                n /=i;
            }
            if(k>0)
            {
                cout << i;
                if(k>1) cout << "^" << k;
                if(n>i) cout << " * ";
                b *= (k+1);
                c *= cau_c(i,k);
            }
    }
    // câu b
    cout << endl << b;
    // câu c
    cout << endl << c;
    return 0;
}