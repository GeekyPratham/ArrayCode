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


    int brr[n];

    brr[n-1]=-1;
    int maximum=height[n-1];
    
    for(int i=n-2;i>=0;i--){
        brr[i]=maximum;
        if(maximum<height[i]){
            maximum=height[i];
        }
    }
    for(int i=0;i<n;i++){
         cout<<brr[i]<<"  ";
     }
     cout<<endl;

     int crr[n];
     crr[0]=-1;
     crr[n-1]=-1;
     for(int i=1;i<n-1;i++){
        if(arr[i]<brr[i]){
            crr[i]=arr[i];
        }
        else crr[i]=brr[i];
     }
     for(int i=0;i<n;i++){
         cout<<crr[i]<<"  ";
     }
     cout<<endl;

     int area=0;


     for(int i=1;i<n-1;i++){
        if(height[i]<crr[i]){
            area=area+(crr[i]-height[i]);
        }
     }
     cout<<area;


}