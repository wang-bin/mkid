#include "mkid.h"
#include <iostream>
using namespace std;

int main()
{
    cout << "id32base64 for 'Hello': " << mkid32base64_5<'H','e','l','l','o'>::value << endl;
    cout << "id32base64 for 'MrWang': " << mkid32base36_6<'M','r','W','a','n','g'>::value << endl;
    cout << "FourCC for 'HEVC': " << mkid_fourcc<'H','E','V','C'>::value << endl;
    return 0;
}
