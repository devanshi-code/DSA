#include<iostream>
using namespace std;
int main( ){
    int n , sum=0;
    cout<<"Enter value of n\n";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
        }
    cout<<"sum of n natural no's=\n"<<sum;
}