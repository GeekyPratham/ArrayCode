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
    int num=arr[0];
    int i=1;
    bool flag = true;
    while(i<n){
        if(num<arr[i]){
            num=arr[i];
            flag = true;
        }
        else{
            flag= false;
            break;
        }
        i++;

    }
    if(flag==true) cout<<"it is sort";
    else cout<<"it is not sort";

    

}