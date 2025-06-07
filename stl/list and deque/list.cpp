#include<iostream>
#include <list>
#include <deque>
using namespace std;
                      
int main() {
    // list<int> l; //list is implemented as a doubly linked list where as vector is impleted as a dynamid array.
    //              // In list random access is not possible
    //              // In list we a function like push_front similar to push_back
    //              // In list we a function like emplace_front similar to emplace_back
    //              // In list we a function like pop_front similar to pop_back

    // l.emplace_back(1);
    // l.push_back(2);
    // l.push_back(3);
    // l.push_back(4);
    // l.push_back(5);

    // for(int val:l){
    //     cout<<val<<" ";
    // }
    // cout<<endl;



    //DEQUE

    deque<int> d; //deque is implemented as a double ended queue , it is similar to dynamic array that is why random access is possible in it
                 // In deque we a function like push_front similar to push_back
                 // In deque we a function like emplace_front similar to emplace_back
                 // In deque we a function like pop_front similar to pop_back

    d.emplace_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    for(int val:d){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}