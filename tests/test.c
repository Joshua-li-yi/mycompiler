// test1 TODO 段错误
// if (1 > 1);
//

// test2
// int c = 1 + 1;
// if (1 > 1)
// {
//     int c = 2;
//     // c = 3+1;
//     bool a = 1;
// }
// else
// {
//     int n = 0;
// }

// test3
// int c=1+1;
// while(1){
//     int a;
// }
// int a;
// a=1;
// test4
// int c=1+1;
// // for (;;){
// //     int m;
// // }
// int a;
// while (a > 0 && a <= 10 || a % 100 == 10 && !a == 10){
//     int c =0;
// }
// test5
// int c =1;
// int f();
// // void f2(int a, bool b);

// int f(){
//     int m;
//     return 1;
// }

// // void f2(int a, bool b){
// //     int c;
// //     return;
// // }

// f();
// int m,n;
// f2(m,n);
// void main(){
//     int a,s;
//     a = 10;
//     s = 0;
//     char ch;
//     while (a > 0 && a <= 10 || a % 100 == 10 && !a == 10)
//     {
//         a -= 1;
//     }
// }

/*I'm level 1 test.*/ 
void main()
{
    int a, s;
    a = 10;
    s = 0;
    char ch;
    scanf("\%d", &ch);
    while (a > 0 && a <= 10 || a % 100 == 10 && !a == 10)
    {
        a -= 1;
        int a;
        a = 10;
        s += a;
        if (-s < -10)
        {
            printf("result is: %d\n", s);
            int b;
            b = 10;
            for (int i = 0; i < b; i++)
            {
                printf("Have fun: %d\n", i);
            }
        }
    }
}