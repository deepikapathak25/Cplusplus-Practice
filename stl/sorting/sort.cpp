#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;


bool comparator(pair<int,int>p1, pair<int,int> p2){
    if(p1.second <p2.second)
    return true;
    if(p1.second>p2.second) return false;

    if(p1.first <p2.first) return true;
    else return false;

}
int main() {
    // int arr[5]= { 3, 5, 1, 8, 2};

    // sort(arr, arr+5);
    // for(int val:arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;


    // vector<int> arr= { 3, 5, 1, 8, 2};

    // sort(arr.begin(), arr.end()); //sorting in ascending
    // sort(arr.begin(), arr.end(),greater<int>());//sorting in descemnding
    // reverse(arr.begin(), arr.end()); //sorting in ascending
    // reverse(arr.begin()+1, arr.begin()+3);//sorting in descemnding
    // for(int val:arr){
    //     cout<<val<<" ";
    // }
    // cout<<endl;

    // vector<pair<int,int>> vec = {{3,1}, {2,1}, {7,1},{5,2}};
    // sort(vec.begin(),vec.end(), comparator);
    // for(auto p:vec){
    //     cout<<p.first <<" "<<p.second <<endl;
    // }



    // string s="abcd";
    // next_permutation(s.begin(),s.end());
    // prev_permutation(s.begin(),s.end());
    // cout<<s<<endl;

    
    vector<int> vec={1,2,3,4,5,6};
    cout<<*(max_element(vec.begin(),vec.end()))<<endl;
    cout<<*(min_element(vec.begin(),vec.end()))<<endl;
    cout<<binary_search(vec.begin(),vec.end(), 5)<<endl;
    return 0;
}