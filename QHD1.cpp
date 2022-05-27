#include <iostream>
#include <algorithm>
#include <vector> 
using namespace std;
vector<int> a;

int l[100];
int t[100];
void QHD(int n)
{
    
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
void insert_array()
{
    a.insert(a.begin(),Min);
    a.push_back(Max);
}
int main()
{
    int n = 8;
    a = {1,5,9,3,20,7,10,3};
    int Min, Max ;
    Max =  GTLN(a,n);
    Min = GTNN(a,n);
    insert_array();
    
    return 0;
}
