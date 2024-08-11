#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter the no of students : ";
    cin>>n;
    int marks[n];
    cout<<"enter the marks : ";
    for(int i=0;i<n;i++){
        cin>>marks[i];

        
    }
    for(int j=0;j<n;j++){
        if(marks[j]<=35){
            cout<<j<<" ";
        }
    }
    
}