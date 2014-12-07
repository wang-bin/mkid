#include "mkid.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    cout << mkid32base64_5<'z','z','z','z','z'>::value << endl;
    cout << mkid32base36_6<'z','z','z','z','z','z'>::value << endl;
    cout << "forcc: " << mkid_fourcc<'F', 'o', 'C', 'C'>::value << endl;
    return 0;
}
