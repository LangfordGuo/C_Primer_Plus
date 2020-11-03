//
//  main.c
//  附加 关键字之间的顺序并不影响结果
//
//  Created by 郭龙飞 on 2020/11/4.
//

/* 关键字之间的顺序并不影响结果 */
#include <stdio.h>
int main(void)
{
    signed short int x = 100;
    short signed int y = 1000;
    int short signed z = 10000;
    short int signed u = 999;
    
    printf("%d\n",x);
    printf("%d\n",y);
    printf("%d\n",z);
    printf("%d\n",u);
    
    return 0;
}
