#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(23);
    v.push_back(42);
    v.push_back(24);
    v.push_back(233);
    
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";

    }
    cout<<endl;
    //sort
    sort(v.begin(),v.end());
     
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";

    }
    cout<<endl;



    
}