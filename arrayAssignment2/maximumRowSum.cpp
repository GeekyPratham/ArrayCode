//question 5
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

    int num=0;
    int rowNumber=-1;
    int sum=0;
   
    for(int i=0;i<m;i++){
         
        
        int max=sum;
        sum=num;
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }
        if(max<sum){
            rowNumber=i;

        }
    }

    cout<<"greatest sum index is :"<<rowNumber<<endl;

   
    


    
}