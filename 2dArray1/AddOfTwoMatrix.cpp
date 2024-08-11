#include <iostream>

using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // // }
    // cout<<endl;

    int brr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            brr[i][j]=brr[i][j]+arr[i][j];
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    // cout<<endl;
    // int crr[3][3];

    
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){

    //         // crr[i][j]=arr[i][j]+brr[i][j];
    //         cout<<arr[i][j]+brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    
    
}