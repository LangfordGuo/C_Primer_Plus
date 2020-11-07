//
//  main.c
//  程序清单3.7 打印浮点值
//
//  Created by 郭龙飞 on 2020/11/4.
//
// git pull --progress -v --no-rebase "ssh://***i.git" br***_master

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float aboat = 32000.0;
    double abet = 2.14e99;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n",aboat,aboat);
    // 下面的代码要求编译器支持C99或其中相关的特性
    printf("And it's %a in hexadecimal,powers of 2 notation\n",aboat);//%a是十六进制浮点数的指数形式，
    //十六进制浮点数打印中的p代表2为底的指数p+14就是2的14次方
    printf("And it's %A in hexadecimal,powers of 2 notation\n",aboat);//%A也是十六进制浮点数的指数形式，

    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);
    return 0;
}
