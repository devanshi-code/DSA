#include<string.h>
#include<map>
#include<utility>
using namespace std;
int main()
{
    map<int,string> Students;
    Students[1]="Devanshi";
    Students[2]="Shruti";
    Students[3]="Sachin";
    Students[4]="Rupali";
    cout<<"Students[3]"<<Students[3]<<endl;
    cout<<"Maps.size:"<<Students.size()<<endl;
    for(map<int,string>::iterator i=Students.begin();i!=Students.end();++i)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
     cout << "\nReverse Order:" << endl;  
    for( map<int,string>::reverse_iterator i=Students.rbegin(); i!=Students.rend(); ++i)  
{  
    cout << (*i).first << ": " << (*i).second << endl;  
}
