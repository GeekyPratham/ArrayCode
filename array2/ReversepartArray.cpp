#include <iostream> 
#include <vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void reverse(vector<int> &v){
  int i=0;
  int j=v.size()-1;
   while(i<=j){
         int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
      }
      return display(v);
    
   
      cout<<endl;
  
}
void reversePart(int i,int j,vector<int> &v){
      while(i<=j){
         int temp;
        temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
      }
    display(v);
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
     
    

 
    reverse(v);
    reversePart(0,2,v);
   

   
}