#include <iostream>

using namespace std;

int main()
{
#ifdef DEBUG
    cout << "Hello Debugger!";
#else
    cout << "Hello World!";
#endif
    return 0;
}