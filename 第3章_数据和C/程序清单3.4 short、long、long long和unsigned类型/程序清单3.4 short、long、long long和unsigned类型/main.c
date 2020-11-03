//
//  main.c
//  程序清单3.4 short、long、long long和unsigned类型
//
//  Created by 郭龙飞 on 2020/11/4.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    unsigned int un = 3000000000;
    short end = 200;
    long big = 65537;
    long long verybig = 12345678908642;
    
    printf("un = %u and not %d\n",un,un);
    printf("end = %hd and %d\n",end,end);
    printf("big = %ld and not %hd\n",big,big);
    printf("verybig = %lld and not %ld,and not %d\n",verybig,verybig,verybig);
    return 0;
}
