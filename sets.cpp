#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    //Sets store elements in sorted order and uniqually 🔥
    set<int> st;
    st.insert(1);  //[1]
    st.insert(2);   //[1,2]
    st.insert(2);   //[1,2]
    st.emplace(3);  //[1,2,3]
    st.insert(4);   //[1,2,3,4]

    auto it = st.find(3);       //return the position of the element if exists
                                //if not exist then it returns the next address of the last index

    st.erase(3);        //erase 3



    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1,it2);          //erases element from 2 till 4 (excluding 4)
    //other fucntons are similar to the vector 




    // Lower Bound 🔥
    //lower bound means it returns the position of first ocuurence of an element
    //if it doesnt exist then it points to the exact expected previous position
    //syntax = auto it = st.lower_bound(3); ✅


    //Upper Bound 🔥
    //Upper bound means it returns the next index of the last occurence of an element
    //if it doesnt exist then it points to the exact expected previous position
    //syntax = auto it = st.lower_bound(3); ✅

    cout << endl;
    return 0;
}   