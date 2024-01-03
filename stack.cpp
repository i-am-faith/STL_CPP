//Push,Pop,Top,Size,Empty

#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.emplace(5);        //[1,2,3,4,5]

    // cout << s.top() << endl;
    // s.pop();
    // cout << s.top() << endl;
    // cout << s.size() << endl;
    // cout << s.empty();


    //swaping
    stack<int> s1,s2;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);         //[1,2,3,4,5]
    s2.push(300);
    s2.push(700);

    s1.swap(s2);

    cout << s1.top() <<" " << s2.top() << endl;
    cout << endl;
    return 0;
}