//find the difference between the sum of element present in the even indices and the odd indices.

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

    int sumEven=0;
    int sumOdd=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumEven+= arr[i];
        }
        else{
            sumOdd+= arr[i];
        }
    }
    int difference = sumEven-sumOdd;
    cout<<difference;
    
    

}