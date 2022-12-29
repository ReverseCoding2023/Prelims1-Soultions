#include<iostream>
#include<vector>
using namespace std;
int Find(int x)
{
    int r=0;
    while(x%2==0)
    {
        x/=2;
        r++;
    }
    return r;
}
int main()
{
    vector<int> q2(10000,0);
    for(int i=2;i<=10000;i++)
    {
        q2[i]=q2[i-1]+Find(i);
    }
    int x;
    cin>>x;
    cout<<q2[x];
}