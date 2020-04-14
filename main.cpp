#include <iostream>
#include <stdexcept>
#include <string>
#include "RadioStation.h"
using namespace std;


int main()
{
    //FIX ME: put the following code in a try-catch block 
    try
    {
        RadioStation r("Jazz", 10.12, 2);
        r.broadcast("testing 1 2 3");
        r.broadcast("Stay safe everyone!");
        r.broadcast("Don't go outside too much.");
    }
    //FIX ME: put the following code in a try-catch block
    catch (runtime_error & error)
    {
        cout << error.what() << endl;
    }

    try
    {
        RadioStation a("", 10.12, 2);
    }
    catch (runtime_error & error)
    {
        cout << error.what() << endl;
    }

    try
    {
        RadioStation r("Mango Market", -1, 2);
    }
    catch (runtime_error & error)
    {
        cout << error.what() << endl;
    }

    try
    {
        RadioStation r("Mango Mall", 10, 0);
    }
    catch (runtime_error & error)
    {
        cout << error.what() << endl;
    }

    return 0;
}
