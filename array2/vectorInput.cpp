// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int> v(4);
//     for(int i=0;i<4;i++){
//         cin>>v[i];

//     }
//      for(int i=0;i<4;i++){
//         cout<<v[i]<<" ";

//     }
    
// }


#include <iostream>
#include <vector>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
  
}