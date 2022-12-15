#include <stdio.h>

int main()
{
    struct test {
        char a;
        int b;
    }; //__attribute__((packed));

    //struct test st;
    struct test *ptr;
    //ptr = &st;

    char str[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};

    ptr = str;

    printf("%c\n", ptr->a);
    printf("%c\n", ptr->b);

    return 0;
}
