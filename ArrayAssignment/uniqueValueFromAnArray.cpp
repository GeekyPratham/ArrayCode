#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    
    cout<<"enter the size of an vector:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    int num=100;
    
    for(int i=0;i<n;i++){

        int count=0;
        for(int j=i+1;j<n;j++){
            if(v[i]==v[j]){
                int num=v[j];
                count ++;
            }
          
        }
        if(count == 0 ){
            cout<<v[i]<<" ";
        }
        
    }
    
}
// ye galat hai........

