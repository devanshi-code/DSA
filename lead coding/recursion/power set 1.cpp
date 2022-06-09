vector<vector<int>> helper(vector<int>&v,int i) // here i represents at which element we are starting
{
    if(i>=v.size()) return {{}}; // if index value greater than vector size then return empty array
    vector<vector<int>> partialAns = helper(v,i+1); //recursion will solve for i+1 we will create partialAns
    vector<vector<int>>ans; // making ans vector for final evaluation
    for(vector<int> x : partialAns) // in partial ans we are pusing values of vector array
    {
        ans.push_back(x);
    } 
    for(vector<int> x : partialAns) //here making a copy of array
    {
        vector<int> temp; //temp variable to store array and reverse it
        temp.push_back(v[i]);
        for(int y: x){
            temp.push_back(y);
        }
        ans.push_back(temp);
    } 
    return ans;
}    
    
vector<vector<int>> pwset(vector<int>v)
{
    //Write your code here
    return helper(v,0); // here we are passing a vector and initital value as 0
    
}