#include <iostream>
using namespace std;
int main(){
    int height[]={4,2,0,3,2,5};
    int n=sizeof(height)/sizeof(height[0]);
    cout<<"size is: "<<n<<endl;
    int arr[n];
        arr[0]=-1;
    int max=height[0];
    for(int i=1;i<n;i++){
        arr[i]=max;
        if(max<height[i]){
            max=height[i];
        }

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;


    // int brr[n];

    arr[n-1]=-1;
     max=height[n-1];
    
    for(int i=n-2;i>=0;i--){
         if(max<arr[i]) arr[i]=max;
        if(max<height[i]){
            max=height[i];
        }
        
    }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<"  ";
     }
     cout<<endl;

   

     int area=0;


     for(int i=1;i<n-1;i++){
        if(height[i]<arr[i]){
            area=area+(arr[i]-height[i]);
        }
     }
     cout<<area;


}