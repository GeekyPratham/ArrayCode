#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void reversePart(int i,int j,vector<int> &a){
    while(i<=j){
        int temp=a[j];
        a[j]=a[i];
        a[i]=temp;
        i++;
        j--;

    }
    // display(a);
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);

    display(v);

    int n=v.size();

    int k;
    cout<<"enter the no of step:";
    cin>>k;


    reversePart(0,n-1-k,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
}