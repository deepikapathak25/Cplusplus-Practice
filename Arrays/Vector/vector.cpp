#include<iostream>
#include<vector>
using namespace std;
                      
int main() {
    vector<int> vec ;
    cout<< "Size of vec= "<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout<< "After pushback Size of vec= "<<vec.size()<<endl;
    vec.pop_back();
    cout<< "After pushback Size of vec= "<<vec.size()<<endl;
    
    cout<<vec.at(1)<<endl;
    return 0;
}