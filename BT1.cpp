#include <bits/stdc++.h>
using namespace std;

int gt(int n)
{
    if(n == 1)
    {
        return 1;
    }else
    return n * gt(n-1);
}
int main()
{
    int n;
    while(0<1)
    {
        cin >> n;
        if(n<0)
        {
            cout << "Loi : n < 0 \n Yeu cau nhap lai n : "; 
        }else
        {
            break;
        }
    }
    if(n==0)
    {
        cout << endl << "1";
    }else
    {
        cout << endl <<  gt(n);
    }
    return 0;
}
