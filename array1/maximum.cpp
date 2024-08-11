// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter the size  of an array : ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"maximum is : "<<max;

    
// }
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the size  of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum is : "<<max;

    
}