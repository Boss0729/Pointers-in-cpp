//Prajwal
//24070123073
//A3
#include <iostream>
# include <string>
using namespace std;
int main() {
    string s;
    string* spt;
    spt=&s;
    cout<<"Enter a string: ";
    cin>>s;
    cout<<*spt;

    return 0;
}
/*Output
Enter a string: Hello
Hello
*/