//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;
int main() {
    int arr[]={1,56145,45,34,7};
    int* a1=&arr[0];
    int len=sizeof(arr)/sizeof(arr[0]);
    cout<<"Given array is: "<<endl;
    for(int i=0;i<len;i++){
        cout<<arr[i]<<" ";
        
    }
    cout<<endl;
    cout<<"Revrese of array is: "<<endl<<"[ ";
    for(int i=len-1;i>-1;i--){
        cout<<a1[i]<<" ";
    }
    cout<<"]";

    return 0;
}
/*Output
Given array is: 
1 56145 45 34 7 
Revrese of array is: 
[ 7 34 45 56145 1 ]*/