#include "./FCS.h"

int main(int argc, char **argv)
{
    string get;
    int return_;
    while (true)
    {
        getline(cin,get);
        if (get.compare("exit")) return_ = Output_Exit();


        if (return_ == 0) goto stop;
    }

stop:return 0;
}
