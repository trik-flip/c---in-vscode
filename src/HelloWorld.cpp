#include <iostream>

using namespace std;

/** 
 * This is the main entry point of the application
 * 
 * @returns This application will return a different result, when running in debug mode
 */
int main()
{
// This is set by the -D DEBUG flag given to g++
#ifdef DEBUG
    // This piece of code will execute when running in debug mode
    cout << "Hello Debugger!";
#else
    // This piece of code will execute when running outside debug mode
    // but it will not execute when running in debug mode
    cout << "Hello World!";
#endif
    // this piece of code will always execute
    cout << endl;
    return 0;
}