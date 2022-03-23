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

int main()
{
    int n;
    cin >> n;
    int a = n+1;
    int b = n-1; 
    fstream outfile1;
    fstream outfile2;
    outfile1.open("Output1.txt",ios::out);
    outfile2.open("Output2.txt",ios::out);
    while(1==1)
    {
        if(prime(a))
        {
            break;
        }
        a++;
    }
    outfile1 << a;
    outfile1.close();
    while(1==1)
    {
        if(prime(b))
        {
            break;
        }
        b--;
    }
    outfile2 << b;
    outfile2.close(); 
    fstream outfile3; 
    outfile3.open("Output3.txt",ios::out);
    int sum =0;
    for(int i=2;i<=n;i++)
    {
        if(prime(i))
        {
            sum += i;
        }
    }
    outfile3 << sum;
    outfile3.close();
    return 0;
}
