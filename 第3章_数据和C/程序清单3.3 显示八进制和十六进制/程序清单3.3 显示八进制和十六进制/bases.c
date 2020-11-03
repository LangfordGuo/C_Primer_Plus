//
//  main.c
//  程序清单3.3 显示八进制和十六进制
//
//  Created by 郭龙飞 on 2020/11/4.
//
/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
    int x = 100;
    printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
    printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
return 0;
}
