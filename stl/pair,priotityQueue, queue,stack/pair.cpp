#include<iostream>
#include<vector>
using namespace std;
                      
int main() {
    pair<int,int> p={ 3,5};
    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<endl;

    pair<string,int> pr={"Deepika",5};
    cout<<pr.first<<endl;
    cout<<pr.second<<endl;
    cout<<endl;

    pair<int,pair<char,int>> pt={1,{'a', 3}};
    cout<<pt.first<<endl;
    cout<<pt.second.first<<endl;
    cout<<pt.second.second<<endl;
    cout<<endl;

    //vector of pair
    vector<pair<int,int>> vec= {{1,2},{2,3},{3,4}};
    vec.push_back({4,5}); //push back cannot make the pairs by its own so we have to give the pairs ib push back using curly braces
    vec.emplace_back(4,5); //emplace back can make the pairs by its own
    for(pair<int,int> i: vec){
        cout<<i.first<<" " <<i.second <<endl;
    }
    return 0;
}