//
//  main.c
//  十六进制的浮点数计算
//
//  Created by 郭龙飞 on 2020/11/1.
//

/*十六进制浮点数*/
#include <stdio.h>
int main()
{
    //double hex_num = 0xb.6feep10;
    //printf("十六进制为%#x,写为十进制为%Lf\n",hex_num,hex_num);

    //下溢
    long double toosmall = 0.123456-10;
    printf("普通浮点型toosmall = %Lf\n",toosmall);
    printf("指数表示的浮点型toosmall = %Le\n",toosmall);

    //上溢
    //float toobig = 3.4E38 * 100.00f;
    //printf("toobig普通浮点型%f\n",toobig);
    //printf("toobig指数表示的浮点型%e\n",toobig);
    return 0;
}
