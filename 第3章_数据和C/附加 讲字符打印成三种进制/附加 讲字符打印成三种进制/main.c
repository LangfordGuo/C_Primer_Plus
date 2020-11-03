//
//  main.c
//  附加 讲字符打印成三种进制
//
//  Created by 郭龙飞 on 2020/11/4.
//

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
