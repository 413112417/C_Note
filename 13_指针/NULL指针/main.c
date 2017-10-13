#include <stdio.h>

int main ()
{
    int  *ptr = NULL;

    printf("ptr 的值是 %p\n", ptr  );

    if(!ptr) {
        printf("指针为空\n");
    }

    return 0;
}
