//
//  main.c
//  程序清单3.6 可移植类型
//
//  Created by 郭龙飞 on 2020/11/4.
//

#include <stdio.h>

/* 可移植类型名 */
#include <stdio.h>
#include <inttypes.h>
// #define __STDC_FORMAT_MACROS
int main()
{
    printf("hello world!\n");

    int32_t me32;
    me32 = 45933945;
    printf("First,assume int32_t is int: ");
    printf("me32 = %d\n",me32);

    printf("let's not make any assumptions.\n");
    printf("Instead,use a \"macro\" from inttypes.h: ");
    printf("me32 = %" PRId64" \n", me32);



    return 0;
}
