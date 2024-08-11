#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;

}
int main(){

    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);

    int x;
    cout<<" enter the which you want :";
    cin>>x;

    int count=0;
    for(int i=0;i<n;i++){
        if(v[i]>x) count++;

    }
    cout<<count;
    
}