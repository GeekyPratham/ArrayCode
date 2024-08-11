// #include <iostream>
// using namespace std;
// int main(){
//     int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
//     int n=sizeof(height)/sizeof(height[0]);
//     cout<<"size is: "<<n<<endl;
//     int arr[n];
//         arr[0]=-1;
//     int max=height[0];
//     for(int i=1;i<n;i++){
//         arr[i]=max;
//         if(max<height[i]){
//             max=height[i];
//         }

//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<"  ";
//     }
//     cout<<endl;


//     int brr[n];

//     brr[n-1]=-1;
//     int maximum=height[n-1];
    
//     for(int i=n-2;i>=0;i--){
//         brr[i]=maximum;
//         if(maximum<height[i]){
//             maximum=height[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//          cout<<brr[i]<<"  ";
//      }
//      cout<<endl;

//     // for(int i=0;i<n;i++){
        
//     // }

//      int area=0;


//      for(int i=1;i<n-1;i++){
//         if(height[i]<min(arr[i],brr[i])){
//             area=area+(min(arr[i],brr[i])-height[i]);
//         }
//      }
//      cout<<area;


// }


#include <iostream>
using namespace std;
int main(){
    int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
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

    for(int i=0;i<n;i++){
        arr[i]=min(arr[i],brr[i]);
        
    }

     int area=0;


     for(int i=1;i<n-1;i++){
        if(height[i]<arr[i]){
            area=area+(arr[i]-height[i]);
        }
     }
     cout<<area;


}