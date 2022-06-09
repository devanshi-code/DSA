void reverseArrayHelper(int l,int r,vector<int> &arr)
{
    if(l>=r) return ;
    swap(arr[l],arr[r]);
    reverseArrayHelper(l+1,r-1,arr);
    
}    

void reverseArray(vector<int> &arr , int m)
{
	// Write your code here.
    reverseArrayHelper(m+1,arr.size()-1,arr);
    
}
