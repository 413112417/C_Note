#include <stdio.h>

int main ()
{
    int  i = 1, *ptr;

    ptr = &i;

    printf("变量的地址为：%p\n", ptr);

    printf("变量的前一位的值为：%d\n", ptr[-1]);
    printf("变量的值为：%d\n", ptr[0]);
    printf("变量的后一位的值为：%d\n", ptr[1]);
    
    return 0;
}

/**
 * 指针的值为一块内存地址，
 * ptr[0]表示指针指向的变量的值，
 * ptr[-1]表示前一位变量的值
 * ptr[1]表示后一位变量的值
 * 一位的大小由指针的类型决定
 */
