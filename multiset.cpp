#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    //Sets store elements in sorted order and not uniqually 🔥
    multiset<int> ms;
    ms.insert(1);   //[1]
    ms.insert(1);   //[1,1]
    ms.insert(1);   //[1,1,1]
    ms.insert(2);   //[1,1,1,2]

    // ms.erase(1);    //deletes all 1s in the multiset
    int count = ms.count(1);
    cout << count << endl;

    ms.erase(ms.find(1));   //deletes the first occurence of 1
    ms.erase(ms.find(1),ms.find(1)+2)   //deletes the first and second occurence of 1
    cout << endl;
    return 0;
}