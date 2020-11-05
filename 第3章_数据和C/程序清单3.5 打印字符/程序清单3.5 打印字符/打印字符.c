//
//  main.c
//  程序清单3.5 打印字符
//
//  Created by 郭龙飞 on 2020/11/4.
//

#include <stdio.h>
int main(int argc, const char * argv[])
{
    char ch;
    printf("Please enter a character.\n");
    scanf("%c",&ch);
    printf("The code for %c is %d.\n", ch , ch);

    return 0;
}
