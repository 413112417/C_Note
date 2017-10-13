#include<stdio.h>   
int main()   
{   
    int a[10];   
  
    printf("a:\t%p\n", a);            
    printf("&a:\t%p\n", &a);          
    printf("a+1:\t%p\n", a+1);        
    printf("&a+1:\t%p\n", &a+1);     
  
    return 0;   
} 

/**
   其实a和 &a结果都是数组的首地址，但他们的类型是不一样。
   a表示&a[0],也即对数组首元素取地址，a+1表示首地址+sizeof(元素类型)。
   &a虽然值为数组首元素地址，但类型为：类型 (*)[数组元素个数],所以&a+1大小为：首地址+sizeof(a)。
*/
