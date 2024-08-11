//question 2

#include <iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter the  no of  rows of first matrix : ";
    cin>>m;

    int n;
    cout<<"enter the  no of  columns of first matrix : ";
    cin>>n;
   

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
       

    }

    int p;
    cout<<"enter the  no of  rows of second matrix : ";
    cin>>p;

    int q;
    cout<<"enter the  no of  columns of second matrix : ";
    cin>>q;
    
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>brr[i][j];
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

  
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;


    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            brr[i][j]+=arr[i][j];
        }
        
    }
   
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;

    }


}