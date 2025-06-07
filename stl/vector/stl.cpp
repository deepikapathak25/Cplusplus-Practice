#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vec ={1,2,3,4,5}; 
    

    // cout<<vec.size()<<endl;      //vector size
    // cout<<vec.capacity()<<endl;    //vector capacity

    // for(int val : vec){
    //     cout<< val<<" ";
    // }
    // cout<<endl;

    // cout<<"val at idx 2 "<< vec[2] << " or " << vec.at(2)<<endl; //at() or []
    // cout<<endl;

    // cout<< "front " << vec.front() <<endl; //front
    // cout<<endl;

    // cout<< "back " << vec.back() <<endl; //back 
    // cout<<endl;

    //vec.erase(vec.begin()+2); //erase(1 2 4 5)
    //vec.erase(vec.begin()+1,vec.begin()+3); // erase (in range)

    // vec.insert(vec.begin()+2,100); // insert

    // vec.clear(); //clear

    // for(int val : vec){
    //     cout<< val<<" ";
    // }
    // cout<<endl;

    // cout<<vec.size()<<endl;      //vector size
    // cout<<vec.capacity()<<endl;    //vector capacity

    // cout<<vec.empty()<<endl;    //vector empty

    // iterators

    // cout<< " vec.begin : "<< *(vec.begin())<< endl; //vec.begin
    // cout<< " vec.end : "<< *(vec.end())<< endl; //vec.end

    //forward iteratot
    // vector<int> :: iterator it;
    // for(it=vec.begin(); it!=vec.end();it++){
    //     cout<<*(it)<<endl;
    // }

    //backward iterator
    // vector<int> ::reverse_iterator i; //type 1
    // for(i=vec.rbegin();i!=vec.rend();i++){
    //     cout<<*(i)<<endl;
    // }

    //type 2
    // for(vector<int> ::reverse_iterator i=vec.rbegin();i!=vec.rend();i++){
    //     cout<<*(i)<<endl;
    // }

    //type 3
    for(auto i=vec.rbegin();i!=vec.rend();i++){
        cout<<*(i)<<endl;
    }

    return 0;
}