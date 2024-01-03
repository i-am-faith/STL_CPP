#include<bits/stdc++.h>
using namespace std;

int main() {
    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.emplace_back(3);
    ls.emplace_back(4);
    ls.push_back(5);
    //[1,2,3,4,5]
    


    //Push Front 🔥
    //syntax = list.push_front(element); ✅
    // ls.push_front(300);      [300,1,2,3,4,5]
    //** begin,end,rbegin,rend,pop_back,pop_front,clear,insert,size,swap all are same as vectors**



    for(auto i=ls.begin();i!=ls.end();i++)
    {
        cout << *i << endl;
    }

    cout << endl;
    return 0;
}
