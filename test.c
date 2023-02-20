#include <stdio.h>
static __thread int a = 100;
int main()
{
    printf("Hello, World!\n");
    printf("%d\n",a);
    return 0;
}