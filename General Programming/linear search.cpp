*/ Searching algorothms are designed to retrive or check an element from any data structure where it is formed
    Are of two types:
    1) Sequential Search
    2)Interval Search
    1) In sequential search list or array is traversed sequentially and it is checked for every element.
    2)Interval search works on sorted data and is more efficient than linear search as repeadtedly target centre of search structure and divide search space in half.
    e.g binary search*/

    #include<iostream>
    using namespace std;
    void linearSearch(int a[],int n)
    {
        int temp=-1;
        for(int i=0;i<5;i++)
        {
            if(a[i]==n)
            {
                cout<<"Element found at location :"<<i<<endl;
                temp=0;
                break;
            }
        }
        if(temp==-1)
        {cout<<"no element found"<<endl;}
    }

    int main()
    {
        int arr[5];
        cout << "Please enter 5 elements of the Array" << endl;
        for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        }
        cout<<"Enter element to search"<<endl;
        int num;
        cin>>num;
        linearSearch(arr,num);
        return 0;
    }