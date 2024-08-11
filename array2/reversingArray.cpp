#include <iostream> 
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int  main(){
      vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(4);
    v.push_back(14);
    v.push_back(12);
    v.push_back(31);

    display(v);
    

    //using while loop

    // int i=0;
    // int j=v.size()-1;
    // while(j>=i){
    //     int temp;
    //     temp=v[i];
    //     v[i]=v[j];
    //     v[j]=temp;
    //     i++;
    //     j--;
    // }

    //using for loop

    for(int  i=0,j=v.size()-1;i<=j;i++,j--){
        int temp;
        temp=v[i];
         v[i]=v[j];
         v[j]=temp; 
    }
    display(v);

   
}