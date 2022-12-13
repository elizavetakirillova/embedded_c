#include <stdio.h>

int main()
{
    struct test {
        char a;
        int b;
    }; //__attribute__((packed));

    struct test st[10];

    char str[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};

    st[0].a = str[0];
    st[0].b = str[5];

    printf("%c\n", st[0].a);
    printf("%c", st[0].b);

    return 0;
}
