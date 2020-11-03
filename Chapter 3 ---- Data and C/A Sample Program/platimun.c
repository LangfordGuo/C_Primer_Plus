/* platinum.c -- your weight in platinum */
#include <stdio.h>
int main(void)
{
    float weight; // 体重
    float RMB_value;  //白金价值
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("请输入你重多少英镑: ");
    /*获取用户输入*/
    scanf("%f",&weight);
    printf("每英镑铂金的价格是$1799.99美元！\n");
    printf("那么同等重量的铂金价格是$%.5f美元 \n", weight * 1799.99);
    RMB_value = weight * 1799.99 * 6.0;
    printf("那么你就值$%.5f元。\n", RMB_value);
    return 0;
}


=================Printing int values=============
print1.c
/*printl.c - dosplays some properties of printf()*/
#include <stdio.h>
int main(void)
{
    int ten = 10;
    int two = 2;
    printf("Doing it right:");
    printf("%d minus %d is %d\n",ten,two,ten-two);
    printf("Doing it wrong:");
    printf("%d minus %d is %d\n",ten);
}
=================Printing int values=============

=================Displaying Octal and Hexadecimal=============
/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
    int x = 100;
    printf("dec = %#d; octal = %#o; hex = %#x\n", x, x, x);
    //printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
return 0;
}
=================Displaying Octal and Hexadecimal=============

========================关键字之间的顺序并不影响结果====================
/* 关键字之间的顺序并不影响结果 */
#include <stdio.h>
int main(void)
{
    signed short int x = 100;
    short signed int y = 1000;
    int short signed z = 10000;
    short int signed u = 999;
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",u);
    printf("dec = %#d; octal = %#o; hex = %#x\n", x, x, x);
    //printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
return 0;
}
========================关键字之间的顺序并不影响结果====================
#include <stdio.h>
int main()
{
    int C = 'C';
    
    printf("十进制C = %#d\n",C);
    printf("十六进制C = %#x\f",C);
    printf("八进制C = %#o\n",C);

    char D = 'D';
    printf("十进制表示char类型D = %d\n",D);
    printf("字符表示char类型D = %c\n",D);
}

hexadecimal.c
/*十六进制浮点数*/
#include <stdio.h>
int main()
{
    double hex_num = 0xb.6feep10;
    printf("十六进制为%#x,写为十进制为%Lf\n",hex_num,hex_num);

    //下溢
    long double toosmall = 0.123456789e-10;
    printf("普通浮点型toosmall = %f\n",toosmall);
    printf("指数表示的浮点型toosmall = %e\n",toosmall);

    //上溢
    float toobig = 3.4E38 * 100.00f;
    printf("toobig普通浮点型%f\n",toobig);
    printf("toobig指数表示的浮点型%e\n",toobig);
    return 0;
}