#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    //Map stores key and value,       map=[key,value];
    //Key and value can be any datatype -> Int,Float,Set,Stack etc
    //Map stores unique keys with sorted order just like sets 🔥
    //emplace is not working in Maps



    map<int,int> mpp;
    // map<int, pair<int,int>> mpp;
    // map<pair<int,int>,int> mpp;
    mpp.insert({1,7});
    mpp.insert({3,2});
    mpp[2] = 4;     //manually declaring


    //traversal ✅
    for(auto it=mpp.begin();it!=mpp.end();it++)
    {
        cout << it->first << " " << it->second << endl;     //use arrow operator
    }

    cout << mpp[1];     //if present it will return the value of the key
    cout << mpp[7];     //if not present then return 0


    //Other fucntions are similar to sets
    //There is also multimap[Sorted ✅ & Unique ❌] and unorderedmap [Sorted ❌ & Unique ❌]

    cout << endl;
    return 0;
}