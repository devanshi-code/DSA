int main() {
	// your code goes here
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n,c;
        cin>>n>>c;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
             cin>>a[i];
             sum=sum+a[i];
        }
        if(sum<=c)
        {
            cout<<"Yes"<<endl;
    
        }
        else{
            cout<<"No"<<endl;
        }
    }
	return 0;
}

