// #include <iostream>
// using namespace std;
// int main(){
//     int arr[7]={2,4,5,53,9,93,903};
//     for(int i=0;i<7;i++){
//     cout<<arr[i]<<endl;
//     }
// }

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of elements :";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}