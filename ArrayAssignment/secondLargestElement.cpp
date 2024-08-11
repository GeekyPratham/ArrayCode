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

    int  secMax=arr[0];
    int  max = arr[1];
    if(secMax<max){
        for(int i=2;i<n;i++){
            if(max<arr[i] ){
                secMax=max;
                max=arr[i];

            }
            else if(secMax<arr[i] && max>arr[i]){
                secMax=arr[i];
            }
        }
    }
    else{
        int temp=max;
        max=secMax;
        secMax=temp;
          for(int i=2;i<n;i++){
            if(max<arr[i] ){
                secMax=max;
                max=arr[i];

            }
            else if(secMax<arr[i] && max>arr[i]){
                secMax=arr[i];
            }
        }
    }
    cout<<max<<endl;
    cout<<secMax;
    
}



// by mam
// #include <iostream>
// #include <climits>
// using namespace std;
// int main() {
// int a[6]={-12 ,-5, 1, -10, -29, -4};
// int max1,max2=INT_MIN;
// for(int i=0;i<5;i++){
// if(max1<a[i]){
// max2=max1;
// max1=a[i];
// }
// else if(max2<a[i] && a[i]!=max1){
// max2=a[i];
// }
// }
// if(max2==INT_MIN){
// cout<<"No second element exists"<<endl;
// }
// else cout<<max2<<endl;
// return 0;
// }