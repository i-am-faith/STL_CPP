#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    // priority_queue<int> pq;
    // //It uses insertion sort while checking elements and add them into it's deserved position
    // pq.push(10);
    // pq.push(4);
    // pq.push(2);
    // pq.push(1);
    // pq.emplace(7);         //[1,2,4,7,10]

    // cout << pq.top() << endl;   //10
    // pq.pop();
    // cout << pq.top() << endl;   //7
    // //size,swap,empty are same as stack

    //Minimum Heap
    priority_queue<int , vector<int> ,greater<int>> pq;
    //It uses min to max order
    pq.push(10);
    pq.push(4);
    pq.push(2);
    pq.push(1);
    pq.emplace(7);         //[10,7,4,2,1]


    cout << pq.top() << endl;   //1
    pq.pop();
    cout << pq.top() << endl;   //2

    cout << endl;
    return 0;
}   