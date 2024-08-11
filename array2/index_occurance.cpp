// //method 1;


// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){

//     vector<int> v;
//     v.push_back(1);
//     v.push_back(3);
//     v.push_back(2);
//     v.push_back(4);
//     v.push_back(3);
//     v.push_back(4);
//     v.push_back(1);
//     v.push_back(6);


//       for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;

//        int index=-1;
//        int x;
//        cin>>x;
//        for(int i=0;i<v.size();i++){
//         if(v[i]==x){
//             index=i;
//         }
//         else index=index;
       
//        }
//        cout<<index<<endl;
 


// }



// //method 2;


#include <iostream>
#include <vector>
using namespace std;
int main(){

    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(4);
    v.push_back(1);
    v.push_back(6);


      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       int x;
       cin>>x;
       for(int i=(v.size())-1;i>=0;i--){
        if(v[i]==x){
          cout<<i;
         
          break;
        }
       }
      
}

