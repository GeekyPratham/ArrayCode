//question 2 of week 6
#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the  no of rows: ";
    cin>>m;

    int n;
    cout<<"enter the  no of columns: ";
    cin>>n;

    int arr[m][n];
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    int brr[n][m];
    //transpose

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            brr[i][j]=arr[j][i];

        }
        
    }
    //transpose print

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<brr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    

    //90 degree anticlockwise rotation

    for(int i=n-1;i>=0;i--){
        for(int j=0;j<m;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }



   

   
    


    
}