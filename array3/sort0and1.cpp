#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    int noZ=0;
    int noO=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0) noZ++;
        else noO++;
    }
    cout<<noZ<<endl;
    cout<<noO<<endl;
    for(int i=0;i<noO-1;i++){
        v[i]=0;

    }
    for(int i=noO;i<v.size();i++){
        v[i]=1;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    


   
    
}