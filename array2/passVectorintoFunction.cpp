// call by value
// #include <iostream>
// #include <vector>
// using namespace std;
// void change(vector<int> a){
//     a[0]=100;
//      for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//        }
//        cout<<endl;

// }
// int main(){
//     vector<int> v;
//     v.push_back(3);
//      v.push_back(53);
//       v.push_back(34);
//        v.push_back(33);
//        for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//        }
//        cout<<endl;
//        change(v);
//        cout<<endl;
//         for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";               // isme index 1 ka value change nahi hua

//        }
       
    
// }



#include <iostream>
#include <vector>
using namespace std;
void change(vector<int> &a){
    a[0]=100;
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
       }
       cout<<endl;

}
int main(){
    vector<int> v;
    v.push_back(3);
     v.push_back(53);
      v.push_back(34);
       v.push_back(33);
       for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
       }
       cout<<endl;
       change(v);
       cout<<endl;
        for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";              
       }
       
    
}