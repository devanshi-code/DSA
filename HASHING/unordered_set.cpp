#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    s.insert(20);//insertion operation: in this operation duplicacy is not allowed
    for(auto it=s.begin();it!=s.end();it++)
      cout<<(*it)<<endl;
    cout<<"No of elements "<<s.size() <<endl; //size or no of elements present
    //clear FUNCTION
    s.clear(); //it will clear whole hashmap
    cout<<"No of elements "<<s.size() <<endl;
    //find function
    int key=25;
    if(s.find(key)!=s.end())
   { cout<<"Key is present";}
   else{
     cout<<"Key not present"<<endl;
   }
   //erase function: it erases the key
   int deleted_key=5;
   s.erase(deleted_key);
   for(auto it=s.begin();it!=s.end();it++)
      cout<<(*it)<<endl;
   //another way to use erase function
   int key=20;
   if(s.find(key)!=s.end())
   { auto temp=s.find(key);
     s.erase(temp);
   }
   else{
     cout<<"Key not present"<<endl;
   }   
   cout<<"No of elements "<<s.size() <<endl;
   //count function: same as find. find return iterator to that element and count function will return 1 if present and 0 if absent
   if(s.count(5))
   {
     cout<<"Key found"<<endl;
   }
   else
   {
     cout<<"Key not found"<<endl;
   }



}