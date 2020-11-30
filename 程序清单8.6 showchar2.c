#include <stdio.h>

void display(char cr, int lines, int width);
int main()
{
    int ch; //待打印的临时字符
    int rows, cols;
    printf("请输入一个字符，及行数和列数:\n");
    while ((ch = getchar()) != '\n')
    {
        printf("程序已进入while循环\n");
        //scanf("%d %d",&rows,&cols);
        if (scanf("%d %d", &rows, &cols) != 2)
        {
            printf("scanf的返回值不是2，终止程序！\n");
            break;
        }            
        while (getchar() != '\n')
        {
            //printf("程序正在跳过回车\n");
            continue;
        }
        printf("请输入另外一个字符，及行数和列数(或者按下回车结束本程序):\n");
        display(ch, rows, cols);
    }
    printf("Bye.\n");
    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;
    for (row = 0; row < lines; row++) /*行增循环*/
    {
        for (int col = 0; col < width; col++) // 列增循环
        {
            putchar(cr);
        }
        putchar('\n');
    }
}
