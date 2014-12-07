Generate a unique integer from characters at build time. A replacement of FourCC.

Supports 0~6 characters as parameters.

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
    
### Theorem 1

Given an integer `q`, any integer can be uniquely expressed as `x=a0+a1*q+a2*q^2+... +ak*q^k, ai,k is in N`

### Thereom 2

Let K(q) be the max value let polynomial expression be a 32 bit integer, then `K(128)<=3` (FourCC), `K(64)<=4` (mkid32base64_n, n<=5) and `K(36)<=5` (mkid32base36_n, n<=6).

### Proof

Obviously
