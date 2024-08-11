//question 4

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
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }

    int max=arr[0][0];

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]){
                max=arr[i][j];
            }
        }

    }
    cout<<"the greatest element is :"<<max;
    

}