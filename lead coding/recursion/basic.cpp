//sum of n natural nos
#include<iostream>
using namespace std;
int sum(int n)
{   if(n==1) return 1;
    int partialAns = sum(n-1);
    return n+ partialAns;
}
int main(){
  int n;
  cin>>n;
  cout<<sum(n);
}