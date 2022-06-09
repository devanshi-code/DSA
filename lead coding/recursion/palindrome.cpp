bool isPalindromeHelper(int l,int r,string &s)
{
    if(l>=r) return true; //base condition
    if(s[l]!=s[r]) return false;
    return isPalindromeHelper(l+1,r-1,s);
}    

bool isPalindrome(string &s)
{
	// Write your code here.
    return isPalindromeHelper(0,s.size()-1,s);
}