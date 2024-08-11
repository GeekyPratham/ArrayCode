#include <iostream>
#include <vector>
using namespace std;
int main(){
    int numrows;
    cout<<"enter the size of rows : ";
    cin>>numrows;

    // mera jagha tayar ho gaya jisme ham apna pascal triangle bhare ga 
    //

    vector<vector <int> > v;
    for(int i=0;i<numrows;i++){
        vector<int> a(i+1);
        v.push_back(a);
    }

    //ab ham element bhare ge;

    for(int i=0;i<numrows;i++){
        for(int j=0;j<=i;j++){
            if(j==0 || i==j){
                v[i][j]=1;
            }
            else{
                v[i][j]=v[i-1][j]+v[i-1][j-1];
            }
        }
    }

    // ab print karai ga 

    int n;
    cout<<"enter the row index  which you want to print :";
    cin>>n;

    for(int j=0;j<=n;j++){
        cout<<v[n][j]<<" ";
    }

}