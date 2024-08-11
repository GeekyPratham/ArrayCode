#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size  of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter the value of number : ";
    cin>>x;
    bool flag=false;

    for(int i=0;i<n;i++){
        if(arr[i]==x){
            flag=true;
        }
    }
    if(flag==true) cout<<"enement found .";
    else cout<<"element not found.";
}