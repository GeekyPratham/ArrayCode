#include <iostream>

using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    
    int prod=1;
    for(int i=0;i<n;i++){
        prod*=arr[i];

    }
    cout<<prod;
}