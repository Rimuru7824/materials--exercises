#include <bits/stdc++.h>
using namespace std;

int cp(int n) {
    int x = sqrt(n);
    if (x * x == n) return 1;
    return 0;
}
int UD(int n) {
    int sum=0;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            int x = n/i;
            sum += x;
        }
    }
    if (cp(n) == 1) sum += sqrt(n);
    return sum;
}

int main()
{
    // phần 1 
    int n, m;
    cin >> n >> m;
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
    int N;
    cin >> N;
    // đang làm 
    return 0;
}
