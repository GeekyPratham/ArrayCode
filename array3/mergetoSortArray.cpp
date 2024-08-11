// // // method  using 3 pointers
// // #include <iostream>
// // #include <vector>
// // using namespace std;
// //   vector<int> merge(vector<int> &v1,vector<int> &v2,vector<int> &v){
// //     int i=0;
// //     int j=0;
// //     int k=0;

// //     while(k<v.size()){

// //         if(i<v1.size()){
// //             if(v1[i]<v2[j]){
// //             v[k]=v1[i];
// //             i++;
// //             k++;
// //             }                         //something wrong in this code .
// //             else {
// //             v[k]=v2[j];
// //             j++;
// //             k++;
// //             }
// //         }
// //         else{
// //         v[k]=v2[j];
// //         j++;
// //         k++;
// //         }
// //     }

// //     return v;
// // }
// // int main(){
// //     vector<int> v1;
// //     v1.push_back(1);
// //     v1.push_back(4);
// //     v1.push_back(5);
// //     v1.push_back(8);

    
// //     int n1=v1.size();
// //      for(int i=0;i<n1;i++){
// //         cout<<v1[i]<<" ";
// //     }
// //     cout<<endl;

// //     vector<int> v2;
// //     v2.push_back(2);
// //     v2.push_back(3);
// //     v2.push_back(6);
// //     v2.push_back(7);
// //     v2.push_back(10);
// //      v2.push_back(12);
// //     v2.push_back(15);
// //      int n2=v2.size();
// //      for(int i=0;i<n2;i++){
// //         cout<<v2[i]<<" ";
// //     }
// //     cout<<endl;

// //     vector<int> v(n1+n2);

// //     merge(v1,v2,v);

// //     for(int k=0;k<v.size();k++){
// //         cout<<v[k]<<" ";
// //     }
// // }

// // method  using 3 pointers
// #include <iostream>
// #include <vector>
// using namespace std;
//   vector<int> merge(vector<int> &v1,vector<int> &v2,vector<int> &v){
//     int i=0;   //vector v1;
//     int j=0;   //vector v2;
//     int k=0;   //vector resultant v;

//     while(i<=v1.size() && j<=v2.size()){
//         if(v1[i]<v2[j]){
//             v[k]=v1[i];
//             i++;
//             k++;
//         }
//         else{        // v2[j]<v1[i];
//              v[k]=v2[j];
//             j++;
//             k++;

//         }
//     }
//     if(i==v1.size()){    // for remaining all the element of v2
//         while(j<=v2.size()){
//              v[k]=v2[j];
          
//             k++;
//               j++;

//         }
//     }
//      if(j==v2.size()){    // for remaining all the element of v1;
//         while(i<=v1.size()){
//              v[k]=v1[i];
          
//             k++;
//               i++;

//         }
//     }

//     return v;
// }
// int main(){
//     vector<int> v1;
//     v1.push_back(1);
//     v1.push_back(4);
//     v1.push_back(5);
//     v1.push_back(8);
//         v1.push_back(10);
//     v1.push_back(40);
//     v1.push_back(86);
//     v1.push_back(87);
//       v1.push_back(88);
//     v1.push_back(89);
//     v1.push_back(90);
//     v1.push_back(91);


    
//     int n1=v1.size();
//      for(int i=0;i<n1;i++){
//         cout<<v1[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> v2;
//     v2.push_back(2);
//     v2.push_back(3);
//     v2.push_back(6);
//     v2.push_back(7);
//     v2.push_back(11);
//      v2.push_back(12);
//     v2.push_back(15);
//        v2.push_back(50);
//     v2.push_back(80);
//       v2.push_back(81);
//     v2.push_back(82);
//     v2.push_back(83);
//     v2.push_back(85);

    

//      int n2=v2.size();
//      for(int i=0;i<n2;i++){
//         cout<<v2[i]<<" ";
//     }
//     cout<<endl;

//     vector<int> v(n1+n2);

//     merge(v1,v2,v);

//     for(int k=0;k<v.size();k++){
//         cout<<v[k]<<" ";
//     }
// }


#include <iostream>
#include <vector>
using namespace std;
  vector<int> merge(vector<int> &v1,vector<int> &v2,vector<int> &v){
    int i=v1.size()-1;
    int j=v2.size()-1;
    int k=(v1.size()+ v2.size())-1;
    while(i>=0 && j>=0){
        if(v1[i]>v2[j]){
            v[k]=v1[i];
            k--;
            i--;
        }
        else {
            v[k]=v2[j];
            k--;
            j--;
        }
    }

    if(i<0){
        v[k]=v2[j];
        k--;
        j--;
    }
    if(j<0){
        v[k]=v1[i];
        k--;
        i--;
    }
    

    return v;
}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);
        v1.push_back(10);
    v1.push_back(40);
    v1.push_back(86);
    v1.push_back(87);
      v1.push_back(88);
    v1.push_back(89);
    v1.push_back(90);
    v1.push_back(91);
        v1.push_back(98);
    v1.push_back(99);
    v1.push_back(100);
    v1.push_back(101);


    
    int n1=v1.size();
     for(int i=0;i<n1;i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(11);
     v2.push_back(12);
    v2.push_back(15);
       v2.push_back(50);
    v2.push_back(80);
      v2.push_back(81);
    v2.push_back(82);
    v2.push_back(83);
    v2.push_back(85);
        v2.push_back(500);
    v2.push_back(800);
      v2.push_back(801);
    v2.push_back(802);
    v2.push_back(803);
    v2.push_back(805);

    

     int n2=v2.size();
     for(int i=0;i<n2;i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v(n1+n2);

    merge(v1,v2,v);

    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
}
