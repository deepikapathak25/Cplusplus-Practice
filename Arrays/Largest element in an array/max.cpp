#include<iostream>
#include<climits>
#include<vector>
using namespace std;
                
int main() {
    vector<int> vec; //Declare an empty vector to store integers

    int size;
    cout << "Enter the size of vector: "<<endl;//user to enter the size of the vector
    cin>> size;

    int temp=INT_MIN; //Initialize a variable to store largest elements

    //Allocate memory before accessing vec[i]
    vec.resize(size);

    for(int i=0;i<size;i++){ //This for loop is used toinput the array
        cin>>vec[i];
    }
    
    //Input element into the vector
    for (int i=0;i<size;i++){ 
        if(vec[i]>temp){ //Update temp if current element is greater
            temp=vec[i];
        }
    }

    //Output the largest element found in the vector
    cout<<"Largest element in this array is "<<temp<<endl; 
    return 0;
}