/*
Bài tập 1: Viết chương trình tính giai thừa của số n với yêu cầu : 
- nếu người dùng nhập n < 0 thì yêu cầu nhập lại 
- sử dụng chương trình con để tính giai thừa của số n
 + n! = 1 nếu n = 0
 + n! = 1*2*3*4*5*....*n (tích của n thừa số)
*/
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
        cout << "1";
    }else
    {
        cout << gt(n);
    }
    return 0;
}
