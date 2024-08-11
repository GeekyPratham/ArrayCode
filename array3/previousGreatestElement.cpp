// #include <iostream>
// using namespace std;
// int main(){
//     int height[]={2,1,0,2,1,0,1,3,2,1,2,1};
//     int n=sizeof(height)/sizeof(height[0]);
//     cout<<"size is: "<<n<<endl;

//     int arr[n];
    
    
//     arr[0]=-1;
//     int max=height[0];
//     for(int i=1;i<n;i++){
//         arr[i]=max;
//         if(max<height[i]){
//             max=height[i];
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

//next greatest element array
#include <iostream>
using namespace std;
int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
    int n=sizeof(height)/sizeof(height[0]);
    cout<<"size is: "<<n<<endl;
    int arr[n];

    arr[n-1]=-1;
    int max=height[n-1];
    cout<<max<<endl;
    for(int i=n-2;i>=0;i--){
        arr[i]=max;
        if(max<height[i]){
            max=height[i];
        }
    }
    for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }



}