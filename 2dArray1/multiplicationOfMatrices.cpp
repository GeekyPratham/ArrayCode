#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m;
    cout<<"enter the row of 1st matrix: ";
    cin>>m;
    int n;
    cout<<"enter the coulmn of 1st matrix :";
    cin>>n;

    int p;
    cout<<"enter the row of 2nd matrix: ";
    cin>>p;
    int q;
    cout<<"enter the coulmn of 2nd matrix :";
    cin>>q;

    int a[m][n];
    int b[p][q];
    if(n==p){
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }

        cout<<endl;

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }

        cout<<endl;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;

        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                for(int k=0;k<n;k++){
                    res[i][j] += a[i][k]* b[k][j];

                }
                cout<<res[i][j]<<" ";
                
                
            }
            cout<<endl;
        }
        


    }
    else{
        cout<<"multiplication not possible.";
    }

}
