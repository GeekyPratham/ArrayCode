// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     int numrows;
//     cout<<"enter the no of rows:";
//     cin>>numrows;

//     vector<vector<int> > v;
//     for(int i=1;i<=numrows;i++){
//         vector<int> a(i);
//         v.push_back(a);
//     }

//     for(int i=0;i<numrows;i++){
//         for(int j=0;j<=i;j++){
//             if(j==i || j==0){
//                 v[i][j]=1;

//             }
//             else{
//                 v[i][j]=v[i-1][j]+v[i-1][j-1];
                
               

//             }
            
            
//         }
//     }

//     for(int i=0;i<numrows;i++){
//         for(int j=0;j<=i;j++){
//             cout<<v[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

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

    for(int i=0;i<numrows;i++){
        for(int j=0;j<=i;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
    