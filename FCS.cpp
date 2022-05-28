#include "./FCS.h"

#include "Error/O.hpp"
#include "System//System_String.hpp"

int main(int argc, char **argv)
{
    string get;
    int return_;
    const time_t now = time(0);
    while (true)
    {
        char* dt =  ctime(&now);
        cout << eva::Output() << dt << ">";
        getline(cin,get);
        if (get.compare("exit") == 0) goto stop;
        delete dt;

    }


stop:
    cout << "Exit by code: 0" << endl;
    return 0;

}
