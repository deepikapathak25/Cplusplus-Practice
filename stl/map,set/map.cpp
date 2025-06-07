#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
                      
int main() {
    /*map<string,int>m; // is map out key is unique and data print in sorted order

    m["tv"]=100;
    m["laptop"]= 100;
    m["headphones"]= 50;
    m["tablet"]= 120;
    m["watch"]= 50;

   // m.insert({"camera", 25});
    m.emplace("camera", 25);

    m.erase("tv");
    for(auto p:m){
        cout<<p.first <<" "<<p.second<<endl;
    }

    // cout<<"count : "<<m.count("laptop")<<endl;
    // cout<<"count : "<<m["laptop"]<<endl;

    if(m.find("camera") != m.end()){
        cout<<"found\n";
    }else{
        cout<<"not found\n";
    }*/


   /* multimap<string,int> m;
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);

    m.erase(m.find("tv"));

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }*/

    //unordered map
    unordered_map<string,int> m;
    m.emplace("tv", 100);
    m.emplace("laptop", 100);
    m.emplace("fridge", 100);
    m.emplace("watch", 100);

    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }


    return 0;
}
//Tc of map functuin like insert erase count is O(log n)
//Tc of unorderedZ_map functuin like insert erase count is O(1)