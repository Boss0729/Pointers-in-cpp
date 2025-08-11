//Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;
int main() {
    int Arr[]={10,20,30,40,50};
    int *ap1=&Arr[2];
    int *ap2=&Arr[4];
    int diff=*ap2-*ap1;
    int add=*ap1+*ap2;
    cout << "Difference of two pointers is: "<<diff<<endl;
    cout<<"Addition of teo pointers is: "<<add;

    return 0;
}
/*Output
Difference of two pointers is: 20
Addition of teo pointers is: 80
*/