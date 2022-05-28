#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
vector<int> a;

int l[100];
int t[100];
void QHD(vector<int> arr, int n)
{
    l[n] = 1;
    for(int i=n;i>=0;i--)
    {
        int jmax = i;
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i] <= arr[j] && l[j] > l[jmax])
            {
                jmax = j;
                l[i] = l[jmax] + 1;
                t[i] = jmax;
            }
        }
    }
}
int GTLN(vector<int> arr, int n)
{
    int Max;
    sort(arr.begin(),arr.end());
    Max = arr.size() - 1;
    Max = arr[Max];
    Max++;
    return Max;
}
int GTNN(vector<int> arr, int n)
{
    int Min;
    sort(arr.begin(),arr.end());
    Min = arr[0];
    Min--;
    return Min;
}
void insert_array(int Min, int Max)
{
    a.insert(a.begin(),Min);
    a.push_back(Max);
}
int main()
{
    int n = 10;
    a = {1,2,3,4,9,10,5,6,7,8};
    int Min, Max ;
    Max =  GTLN(a,n);
    Min = GTNN(a,n);
    insert_array(Min,Max);
    int N = a.size() - 2;
    QHD(a,N);
    cout << "maximum length of subarray : " << l[0] -1 << endl;
    cout << "longest monotonically increasing array : " ;
    int i=0;
    while(t[i]< N)
    {
        cout << a[t[i]] << " ";
        i = t[i];
    }
    return 0;
}
