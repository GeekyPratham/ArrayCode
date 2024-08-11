#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    for(int i=0;i<=n-1;i++){
        cout<<&arr[i]<<endl;
    }
}
// 0x61fec4
// 0x61fec8
// 0x61fecc
// 0x61fed0
// 0x61fed4
//all have a differenc of 4 bytes;