#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-21);
    v.push_back(10);
    v.push_back(30);
    v.push_back(-31);
    v.push_back(-61);
    v.push_back(60);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // int n=v.size();
    int i=0;
    int j=v.size()-1;
    while(i<j){
       
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
            j--;
            
        }
    }
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
   

   


    


   
    
}