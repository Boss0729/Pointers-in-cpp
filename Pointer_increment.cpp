// Prajwal
//24070123073
//A3
#include <iostream>
using namespace std;
int main() {
    int a=20;
    int *aptr;
    char c='H';
    char *cpt;
    bool b=false;
    bool *bpt;
    float f=5.123;
    float *fpt;
    double d=456.13214;
    double* dpt;
    aptr=&a;
    cpt=&c;
    bpt=&b;
    fpt=&f;
    dpt=&d;
    cout <<"int: "<<a<<endl;
    cout<<"int address: "<<aptr<<endl;
    cout<<"char: "<<*cpt<<endl;
    cout<<"charter addres: "<<&c<<endl;
    cout<<"Boolean is: "<<b<<endl;
    cout<<"Boolean address: "<<&b<<endl;
    cout<<"Float is: "<<*fpt<<endl;
    cout<<"Float address: "<<fpt<<endl;
    cout<<"Double: "<<*dpt<<endl;
    cout<<"Double address: "<<&d<<endl;
    cout<<endl;
    aptr++;
    bpt++;
    cpt++;
    fpt++;
    dpt++;
    cout<<"int address after increment: "<<aptr<<endl;
    cout<<"charter address after increment: "<<&c<<endl;
    cout<<"Boolean address after increment: "<<bpt<<endl;
    cout<<"Float address after increment: "<<fpt<<endl;
    cout<<"Double address after increment: "<<dpt<<endl;
    return 0;
}
/*Output
int: 20
int address: 0x7fff1b33b084
char: H
charter addres: H
Boolean is: 0
Boolean address: 0x7fff1b33b082
Float is: 5.123
Float address: 0x7fff1b33b07c
Double: 456.132
Double address: 0x7fff1b33b070

int address after increment: 0x7fff1b33b088
charter address after increment: H
Boolean address after increment: 0x7fff1b33b083
Float address after increment: 0x7fff1b33b080
Double address after increment: 0x7fff1b33b078
*/