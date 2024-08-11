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
    int max=arr[0];
    int sl;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            sl=max;
            max=arr[i];

        }
    }
    cout<<"second_maximum is : "<<sl;

    
}