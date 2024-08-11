#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an vector: ";
    cin>>n;
    
    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);

    }
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
     cout<<endl;

    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int sum=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            sum=sum+ (v[i]*pow(2,i));
        }
    }
    cout<<sum;

}