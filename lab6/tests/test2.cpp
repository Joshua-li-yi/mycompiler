// #include <iostream>
#include <stdio.h>
using namespace std;
int fun(int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int d,e;
    d = 1;
    e = 2;
    int m = fun(d,e);
    printf("%d\n", m);
    printf("hello world %d\n",m);
}