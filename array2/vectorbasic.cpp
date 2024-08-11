#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;//you need not to mention size 
    //inserting /input do not use []


    
    v.push_back(2);
    v.push_back(23);
    v.push_back(42);
    v.push_back(24);
    v.push_back(233);
    


    //if you want to update /access

    v[0]=88;

    cout<<v[0]<<" ";
      cout<<v[1]<<" ";
        cout<<v[2]<<" ";
          cout<<v[3]<<" ";
            cout<<v[4]<<" "; 
            //  cout<<v[5]<<" ";
            //   cout<<v[6]<<" ";       //garbage value dega for this three line.

            //    cout<<v[7]<<" ";

    
}