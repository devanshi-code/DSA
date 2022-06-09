#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int>umap;
    umap["prince"]=44;
    umap["gfg"]=22;
    umap["helloworld"]=35;
    // for(auto x:umap)
    // {
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    string key="prince";
    if(umap.find(key)!=umap.end())
    // {
    //     cout<<"key is present"<<endl;
    // }
    // else{
    //     cout<<"Key is not present"<<endl;
    // }
    {  auto temp=umap.find(key);
      cout<<"Key is: "<<temp->first<<endl;
      cout<<"Value is:"<<temp->second<<endl;
    }
    //erase
    key="helloworld";
    umap.erase(key);
    //insertion operation
    umap.insert(make_pair("mobile",17000));
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    //size
    cout<<umap.size();
    int arr[]={7,0,1,2,3,4,5,6,7,3,2,1,0,4,6};
    unordered_map<int,int>umaped;
    for(int i=0;i<15;i++)
    {
        int key=arr[i];
        umaped[key]++;
    }
    for(auto itr=umaped.begin();itr!=umaped.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    }