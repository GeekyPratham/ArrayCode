//question 1 of week 6
#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the  no of rows/column: ";
    cin>>m;

   

    int arr[m][m];
     for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i!=j && (i+j==m-1))){
                cout<<arr[i][j]<<" ";
            }
            else cout<<"  ";
        }
        cout<<endl;
    }

 

}