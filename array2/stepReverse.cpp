#include <iostream>
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
     vector<int> v1;
    v1.push_back(1);
    v1.push_back(6);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(8);

    display(v1);

    int k;
    cout<<"enter the no of step: ";
    cin>>k;
    for(int i=1;i<=k;i++){
        for(int j=v1.size()-1;j>0;j--){
            int temp=v1[j];
            v1[j]=v1[j-1];
            v1[j-1]=temp;
        }
        
    }
    display(v1);
}