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
    bool flag = false;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               flag =true;
                break;
                
            }
           
        }
        
    }
    if(flag==true){
         cout<<"duplicates found.";
    }
    else {
         cout<<"duplicates not found.";
    }
    
}