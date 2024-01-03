#include<bits/stdc++.h>
using namespace std;
int main()
{ 	
    vector<int> v;

    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    v.emplace_back(4);      //emplace back is faster than push back
    v.push_back(5);          

    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << endl;
    // }


    //Vector with size declaration 🔥
    // syntax = vector<data_type> v(size,value); ✅
    // vector<int> v(5,100);
    // for(int i=0;i<v.size();i++)
    // {
    //     cout << v[i] << endl;
    // }



    //Copy Vector 🔥
    //syntax = vector<data_type> v1(parent_vector); ✅
    // vector<int> v1(5,0);
    // vector<int> v2(v1);
    // for(int i=0;i<v2.size();i++)
    // {
    //     cout << v2[i] << endl;
    // }



    //Iterators 🔥
    //syntax = vector<data_type>::iterator i = v.begin(); ✅
    // vector<int>::iterator i = v.begin();        //points to the first element
    // i++;
    // cout << *i << endl;

    // vector<int>::iterator i = v.end();          //points to the next memory of last element
    // i--;
    // cout << *i << endl;

    // for(auto i=v.begin();i!=v.end();i++)    **
    // {
    //     cout << *i << endl;
    // }




    //Erase Function 🔥
    //syntax = vector.erase(location); ✅
    //syntax = vector.erase(start location,end location); ✅
    // v.erase(v.begin()+1);
    // v.erase(v.begin()+1,v.begin()+2);

    // for(auto i=v.begin();i!=v.end();i++)
    // {
    //     cout << *i << endl;
    // }





    //Insert Function 🔥
    // syntax = vector.insert(location,value) ✅
    //syntax = vector.insert(location,ocuurence,value); ✅
    // v.insert(v.begin(),0);
    // v.insert(v.begin()+1,3,500);
    // for(auto i=v.begin();i!=v.end();i++)
    // {
    //     cout << *i << endl;
    // }




    //Other Fucntions 🔥
    //1. size -> prints the size of the vector
    //syntax = v.size(); ✅
    //2. pop_back -> delete the first element
    //syntax = v.pop_back(); ✅
    //3. swap -> swaps the vectors
    //syntax = v1.swap(v2); ✅
    //4. clear -> erases the entire vector
    //syntax = v.clear(); ✅
    //5. empty -> checks the vector empty or not
    //syntax = v.empty(); ✅




    // Lower Bound 🔥
    //lower bound means it returns the position of first ocuurence of an element
    //if it doesnt exist then it points to the exact expected previous position
    //syntax = lower_bound(a.begin(),a.end()) - a.begin(); ✅

    //[1,2,4,4,5,6]     lower bound of 4 is 2 because 4 is first found at 2


    //Upper Bound 🔥
    //Upper bound means it returns the next index of the last occurence of an element
    //if it doesnt exist then it points to the exact expected previous position
    //syntax = upper_bound(a.begin(),a.end()) - a.begin(); ✅

    //[1,2,4,4,5,6]     Upper bound of 4 is 4 because the last occurence of 4 is found at 3rd index
    //so it return +1 index means 4





    


    cout << endl;
    return 0;
}