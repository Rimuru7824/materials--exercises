#include <bits/stdc++.h>
using namespace std;

int cp(int n) {
    int x = sqrt(n);
    if (x * x == n) return 1;
    return 0;
}
int UD(int n) {
    int sum=0;
    for (int i = 1; i <sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            if(i != 1)
            {
            	int x = n/i;
            	sum += x;
            }
        }
    }
    if (cp(n) == 1) sum += sqrt(n);
    return sum;
}
int main()
{
	// phần 1
	int n;
	cin >> n;
	int x = UD(n);
	if(x==n)
	{
		cout << "YES" << endl;
	}else
	{
		cout <<"NO" << endl;
	}
	// phần 2
	int m;
	cin >> m;
	for(int i=4;i<=m;i++)
	{
		int y = UD(i);
		if(y==i)
		{
			cout << i << " is the complete number" << endl;
		}
	}
	return 0;
}
