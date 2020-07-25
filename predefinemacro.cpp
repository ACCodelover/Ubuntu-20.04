#include <iostream>
using namespace std;
 
#define concat(a,b) a ## b
#define MKSTR(x) #x

int main ()
{
    int xy = 100;
    cout << "Value of __LINE__ : " << __LINE__ << endl;
    cout << "Value of __FILE__ : " << __FILE__ << endl;
    cout << "Value of __DATE__ : " << __DATE__ << endl;
    cout << "Value of __TIME__ : " << __TIME__ << endl;

    cout << MKSTR(HELLO C++) << endl;
 
    cout << concat(x,y) << endl;
    return 0;
}