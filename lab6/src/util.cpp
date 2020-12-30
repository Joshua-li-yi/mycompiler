#include "util.h"
string intTostring(int n)
{
    char ss[16];
    sprintf(ss, "%d", n);
    string s(ss);
    return s;
}