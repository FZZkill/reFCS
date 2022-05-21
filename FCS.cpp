#include "./FCS.h"
#include "Error/_Error/Error.hpp"

#include "Error/O.hpp"
using namespace Error;
using namespace Output;
int main(int argc, char **argv)
{
    string get;
    int return_;
    while (true)
    {
        getline(cin,get);
        if (get.compare("exit")) goto stop;


    }

    
stop:
    Output_Exit();
    return 0;

}
