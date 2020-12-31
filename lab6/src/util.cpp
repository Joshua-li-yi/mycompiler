#include "util.h"
string intTostring(int n)
{
    char ss[16];
    sprintf(ss, "%d", n);
    string s(ss);
    return s;
}

char* strinTochar_star(string str){
    char *strc = new char[strlen(str.c_str()) + 1];
    strcpy(strc, str.c_str());
    return strc;
}