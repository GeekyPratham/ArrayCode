//two pass value


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void sortColours(vector<int> &a){
//     int noz=0;
//     int noo=0;
//     int notwo=0;
//     for(int i=0;i<a.size();i++){
//         if(a[i]==0) noz++;
//         else if(a[i]==1) noo++;
//         else notwo++;

//     }
//     for(int i=0;i<a.size();i++){
//         if(i<noz) a[i]=0;
//         else if(i>=noz && i<(noz+noo)) a[i]=1;
//         else a[i]=2;
//     }
     
     

// }
// int main(){
//     int n;
//     cout<<"enter the size of an array : ";
//     cin>>n;
//     vector<int> v;
//     for(int i=0;i<n;i++){
//         int q;
//         cin>>q;
//         v.push_back(q);
//     }
//     cout<<endl;
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
//     sortColours(v);
//     for(int i=0;i<v.size();i++){
//         cout<<v[i]<<" ";
//     }
// }


//three pointers [dutch flag algorithm]


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// int swap(int a,int b){
//     int temp=a[hi];
//     a[hi]=a[mid];
//     a[mid]=temp;
//     return (a,b);

// }
void sortColours(vector<int> &a){
    int n= a.size();
   int lo=0;
   int mid=0;
   int hi=n-1;
   while(mid<=hi){
    if(a[mid]==2){
        // swap(a[mid],a[hi]);
        int temp=a[hi];
        a[hi]=a[mid];
        a[mid]=temp;
        hi--;
    }
    else if(a[mid]==0){
        // swap(a[lo],a[mid]);
            int temp=a[mid];
            a[mid]=a[lo];
            a[lo]=temp;
        lo++;
        mid++;
    }
    else {
        mid++;
    }
   }
     
     

}
int main(){
    int n;
    cout<<"enter the size of an array : ";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sortColours(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}