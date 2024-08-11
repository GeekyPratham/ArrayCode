#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //for finding pivot index;

    int idx=-1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            idx=i;
            break;
        }
    }

    if(idx==-1){
        reverse(v.begin(),v.end());
    }

    //sorting/reversing afrer pivot index

    reverse(v.begin()+idx+1,v.end());

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    
    int j=-1;
    for(int i=idx+1;i<n;i++){
        if(v[i]>v[idx]){
            j=i;
            
            break;
            }
        }
    

    int temp=v[j];
    v[j]=v[idx];
    v[idx]=temp;

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    


    


}

