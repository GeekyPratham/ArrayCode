#include <iostream>
using namespace std;
int main(){
    int arr[]={3,4,32,53,3535,34,6,34,567,87,93};
    int x;
    cin>>x;
    int count=0;
    for(int i=0;i<11;i++){
        if(arr[i]>x){
            count++;
        }
    }
    cout<<count;
}