#ifndef DEBUG_H
#define DEBUG_H
#include "pch.h"
using std::cerr;
using std::cout;
using std::endl;
using std::list;
using std::stack;
using std::string;
using std::unordered_map;

class Debug
{
public:
    int test_num;
    string test_str;
    Debug(int);
    Debug(string);
};
extern int debugflag;
template <class T>
void test(T t, bool debug=true)
{
    if (debug)
        cout << "test: " << t << endl;
};
#endif