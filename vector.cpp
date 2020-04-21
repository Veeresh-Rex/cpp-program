#include<bits/stdc++.h>
#define fo(i,n) for(i=0;i<n;i++)
using namespace std;
int main()
{
    
    vector<int> obj; // Declare a vertor  (initial capacity is zero)  (vector object is obj)....
    vector<int>obj2(6); // Declare a vector size is 6
    vector <int>obj3(6,5); // declare a vector of size 6 an d assing a defaul value to all 5
    
    cout<<"obj capacity:"<<obj.capacity()<<endl;
    cout<<"obj size:"<<obj.size()<<endl;
    cout<<"obj2 capacity :"<<obj2.capacity()<<endl;
    cout<<"obj2 size :"<<obj2.size()<<endl;
    cout<<"obj 3 data:\n";
    int i;
    fo(i,5)
    {
        cout<<obj3[i];
    }
    

    
}