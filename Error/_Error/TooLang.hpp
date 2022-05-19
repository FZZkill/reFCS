#include <iostream>

using std::string;
using std::cout;
using std::endl;

#pragma once

#include "../../System/System_String.hpp"

namespace Error
{
    int TooLang()
    {
        cout << System_Error::Error() << "1" << "The Command too lang!" << endl;
        return 1;
    }

}
