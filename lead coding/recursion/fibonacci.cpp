#include<iostream>
using namespace std;
int fibo(int n){
    if(n==1 ) return 1;
    if(n==2) return 1;
    int result1= fibo(n-1);
    int result2=fibo(n-2);
    return result1 + result2;
}

int main(){
    //Write your code here. 
    int n;
    cin>>n;
    cout<<fibo(n);
    
}
