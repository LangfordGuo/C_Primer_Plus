//
//  main.c
//  附加 浮点数舍入错误
//
//  Created by 郭龙飞 on 2020/11/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    float a,b;
    b = 2.0e20 +1.0;
    a = b - 2.0e20;
    printf("b = %LLf\n",b);
    printf("a = %f\n",a);
    return 0;
}
