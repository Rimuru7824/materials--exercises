/*
Bài tập 3.
SỐ ANH EM (Tin học trẻ toàn quốc lần I – 1995)
- Ước thực sự của số tự nhiên n là ước khác 1 và chính nó của n; hai số được gọi là anh em nếu chúng có tổng các ước thực sự bằng nhau
VD: 6 và 25 được gọi là hai số anh em vì các ước thực sự của 6 là 2 và 3 có tổng bằng 5 và các ước thực sự của 25 là 5 có tổng các ước thực sự là 5
Viết chương trình để thực hiện chương trình gồm 2 phần
Phần 1 nhập vào 2 số cho biết chúng có là hai số anh em không?
Phần 2 nhập vào số n in ra màn hình những cặp số anh em
*/
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