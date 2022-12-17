#include <stdio.h>

int main(void)
{
    volatile int a = 15;
    int b = 0;

    b++;
    b++;
    b++;
    b++;
    b++;

    if(a!=15){
        printf("a != 15");
    } else {
        printf("a = 15");
    }
    return 0;

}
