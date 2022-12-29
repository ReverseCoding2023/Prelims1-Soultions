#include<iostream>
#include<map>
using namespace std;
int main()
{
    string s;
    cin>>s;
    map<char,int> freq;
    for(auto i:s)
    {
        freq[i]++;
    }
    int prod=1;
    for(auto i:freq)
    {
        prod*=i.second;
    }
    cout<<prod*freq.size();
}