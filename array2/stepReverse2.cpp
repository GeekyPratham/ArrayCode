// #include <iostream>
// #include <vector>

// using namespace std;

// void display(vector<int> &a){
//     for(int i=0;i<a.size();i++){
//         cout<<a[i]<<" ";
//     }
//     cout<<endl;
// }
// void revLast(int i,int j,vector<int> &a){
//     while(j<=i){
//         int temp=a[i];
//         a[i]=a[j];
//         a[j]=temp;
//         i--;
//         j++;
//     }
  
//     // display(a);

// }
// void reverseStart(int i,int j,vector<int> &v){
//     while(i<=j){
//           int temp;
//         temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     // display(v);
// }
// void reverse(int i,int j,vector<int> &v){
//     while(i<=j){
//           int temp;
//         temp=v[i];
//         v[i]=v[j];
//         v[j]=temp;
//         i++;
//         j--;
//     }
//     display(v);
// }





// int main(){
//     vector<int> v;
//     v.push_back(1);
//     v.push_back(6);
//     v.push_back(2);
//     v.push_back(3);
//     v.push_back(7);
//     v.push_back(4);
//     v.push_back(8);

//     display(v);

//     int k;
//     cout<<"enter the no of step which you want : ";
//     cin>>k;
    
//     revLast(v.size()-1,v.size()-k,v);
//     reverseStart(0,v.size()-k-1,v);
//     reverse(0,v.size()-1,v);
// }



