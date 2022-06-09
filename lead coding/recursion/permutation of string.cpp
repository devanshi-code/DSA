#include<bits/stdc++.h>
void perm(int pos, string &str,vector<string> &ans){
    if(pos>=str.size()) //base condition
    {
        ans.push_back(str);
    }    
    //running for remaining elements
    for(int i=pos;i<str.size();i++)
    {
        swap(str[i],str[pos]); //swap first and pos one
        perm(pos+1,str,ans); //calling recursion to do remaining steps
        
        swap(str[i],str[pos]); //backtracking
    }    
}

vector<string> generatePermutations(string &str)
{
    // write your code here
    vector<string>ans;
    perm(0,str,ans);
    sort(ans.begin(),ans.end());
    return ans;
}