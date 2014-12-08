#include "mkid.h"
#include <iostream>
using namespace std;
#define FOURCC(a,b,c,d) (d|(c<<8)|(b<<16)|(a<<24))
int main()
{
    cout << "id32base64 for 'Hello': " << mkid::id32base64_5<'H','e','l','l','o'>::value << endl;
    cout << "id32base64 for 'MrWang': " << mkid::id32base36_6<'M','r','W','a','n','g'>::value << endl;
    cout << "FourCC for 'HEVC': " << FOURCC('H','E','V','C') << " mkid::fourcc: " << mkid::fourcc<'H','E','V','C'>::value << endl;
    return 0;
}
