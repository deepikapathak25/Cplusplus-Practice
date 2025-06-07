#include<iostream>
#include <set> 
#include<unordered_set>
using namespace std;
                      
int main() {
    // set<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // //s.insert(6);

    // // s.insert(1); set only stors unique value
    // // s.insert(2);
    // // s.insert(3);

    // cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
    // cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;

    // cout<< s.size()<<endl;
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;



    // multiset<int> s;

    // s.insert(1);
    // s.insert(2);
    // s.insert(3);
    // s.insert(4);
    // s.insert(5);
    // s.insert(6);

    // s.insert(1); //set only stors unique value
    // s.insert(2);
    // s.insert(3);

    // cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
    // cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;

    // cout<< s.size()<<endl;
    // for(auto val:s){
    //     cout<<val<<" ";
    // }
    // cout<<endl;



   unordered_set<int> s;

    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    s.insert(1); //set only stors unique value
    s.insert(2);
    s.insert(3);

   // cout<<"lower bound = "<<*(s.lower_bound(4))<<endl;
   // cout<<"upper bound = "<<*(s.upper_bound(4))<<endl;

    cout<< s.size()<<endl;
    for(auto val:s){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
// lower bound function in sets return the equal to lower value or above of lower bound value and if no value exist equal to or the lower value that lower bound will return the s.end() value
// lower bound('b') should not be less than key
// uper bound('b') should  be greater than key

// TC of unordered map is O(n)