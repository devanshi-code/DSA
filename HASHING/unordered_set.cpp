#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);//insertion
    for(auto it=s.begin();it!=s.end();it++)
      cout<<(*it)<<endl;
    cout<<"No of elements "<<s.size() <<endl; //size or no of elements present

}