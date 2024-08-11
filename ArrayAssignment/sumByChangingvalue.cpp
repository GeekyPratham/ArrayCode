//given an array of an integer change the value of all the  odd indexed element to 
//its second multiple and increment all even indexed values by 10.


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

    
    for(int i=0;i<n;i++){
        if(i%2!=0){
            arr[i]=2*arr[i];
        }
        else{
             arr[i]=arr[i]+10;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}

