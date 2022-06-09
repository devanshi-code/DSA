#include<bits/stdc++.h>
void unique(int pos,int n,vector<int>&arr,vector<vector<int>>&ans)
{
    if(pos>=arr.size()) 
    {
        ans.push_back(arr);
    }
    unordered_set<int>m;
    for(int i=pos;i<arr.size();i++)
    {
        if(m.find(arr[i])!=m.end()) continue;
        m.insert(arr[i]);
        swap(arr[pos],arr[i]); //swap first and pos one
        unique(pos+1,n,arr,ans); //calling recursion to do remaining steps
        
        swap(arr[pos],arr[i]);
            
    }    
}    

vector<vector<int>> uniquePermutations(vector<int> &arr, int n) {
    // Write your code here.
    vector<vector<int>> ans;
    unique(0,n,arr,ans);
    sort(ans.begin(),ans.end());
    return ans;
}