int CountDigits(int x)
{
    int res=0;
    while(x>0)
    {
        x=x/10;
        res++;
    }
    return res;

//if d is total no of digit then it will take theta(d) time complexity
/* x=789;
   res=0;
   after first iteration
   x=78
   res=1
   after second
   x=7
   res=2
   after third
   x=0
   res=3 */