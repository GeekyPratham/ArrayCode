#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;

    v.push_back(2);

    cout<<"size is = "<<v.size()<<endl;
    cout<<"capacity is = "<<v.capacity()<<endl;
    v.push_back(23);
    cout<<"size is = "<<v.size()<<endl;
    cout<<"capacity is = "<<v.capacity()<<endl;
    
    v.push_back(42);
    cout<<"size is = "<<v.size()<<endl;
    cout<<"capacity is = "<<v.capacity()<<endl;
    v.push_back(24);
    cout<<"size is = "<<v.size()<<endl;
    cout<<"capacity is = "<<v.capacity()<<endl;
    

    
}