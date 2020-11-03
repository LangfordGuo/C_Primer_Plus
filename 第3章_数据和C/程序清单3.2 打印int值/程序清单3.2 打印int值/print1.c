//
// print1.c
//  程序清单3.2 打印int值
//
//  Created by 郭龙飞 on 2020/11/4.
//


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
