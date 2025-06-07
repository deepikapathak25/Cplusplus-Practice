#include<iostream>
#include<queue>
using namespace std;
                      
int main() {
    /*priority_queue<int> q; //max heap( largest element will be on top)

    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;*/


    priority_queue<int, vector<int>, greater<int>> q; //min heap
    q.push(5);
    q.push(3);
    q.push(10);
    q.push(4);
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    return 0;
}
//TC of top - O(n)
//TC of push emplace and top is O(log n)