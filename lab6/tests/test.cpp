#include "../src/pch.h"
using std::cerr;
using std::cout;
using std::endl;
using std::list;
using std::stack;
using std::string;
using std::unordered_map;
using namespace std;
string intTostring(int n)
{
    char ss[16]; //这个长度根据需要吧
    sprintf(ss, "%d", n);
    string s(ss);
    return s;
}
int main(){
    string a="t:";
    int k=1;
    cout<<a+intTostring(k);

}