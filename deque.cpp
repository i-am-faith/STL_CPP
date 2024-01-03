#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    deque<int> dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.emplace_back(4);
    dq.emplace_back(5);


    //Push Front 🔥
    //syntax = list.push_front(element); ✅
    // dq.push_front(300);      //[300,1,2,3,4,5]
    //** begin,end,rbegin,rend,pop_back,pop_front,clear,insert,size,swap all are same as vectors**


    for(auto i=dq.begin();i!=dq.end();i++)
    {
        cout << *i << endl;
    }
    cout << endl;
    return 0;
}