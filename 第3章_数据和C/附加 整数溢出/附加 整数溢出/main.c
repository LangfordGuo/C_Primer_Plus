//
//  main.c
//  附加 整数溢出
//
//  Created by 郭龙飞 on 2020/11/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i = 2147483647;
    unsigned int j = 4294967295;
    
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%d %d %d\n", j, j+1, j+2);
    return 0;
}
