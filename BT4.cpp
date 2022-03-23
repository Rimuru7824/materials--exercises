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
    int n, m;
    fstream infile ;
    infile.open("INPUT.TXT",ios::in);
    infile >> m >> n;
    infile.close();
    fstream outfile ;
    outfile.open("OUT.TXT",ios::out);
    for(int i=m;i<=n;i++)
    {
        if(prime(i))
        {
            outfile << i << endl;
        }
    }
    outfile.close();
    return 0;

}