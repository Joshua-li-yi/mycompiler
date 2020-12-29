#include "debug.h"

Debug::Debug(int num){
    this->test_num = num;
    printf("test[%d]\n", this->test_num);
}

Debug::Debug(string s)
{
    this->test_str = s;
    cout<<"test: "<<this->test_str<<endl;
}
