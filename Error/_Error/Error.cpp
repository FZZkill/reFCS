#include "./Error.hpp"

using std::cout;
using std::endl;

int Error::TooLang()
{
    cout << System_Error::Error() << "1>" << "The Command too lang!" << endl;
    return 1;
}

int Error::InputError(string Error_Code_1)
{
    cout << System_Error::Error() << "2>" << "You Command has error in" << Error_Code_1 << endl;    
    return 2;
}
int Output::Output_Exit()
{
    cout << "Exit, return code: 0" <<endl;
    return 0;
}
