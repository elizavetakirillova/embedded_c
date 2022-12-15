/* Программа-калькулятор */

#include <stdio.h>

void get_nums (int *firstNum, int *secondNum);
void put_menu (int *firstNum, int *secondNum, int *result);
void case_minus (int firstNum, int secondNum, int *result);
void case_plus (int firstNum, int secondNum, int *result);
void case_multiple (int firstNum, int secondNum, int *result);
void case_div (int firstNum, int secondNum, int *result);
void put_result (int result);

int main()
{
    int firstNum;
    int secondNum;
    int result;

    printf("Это программа-калькулятор целых чисел.\n");
    put_menu(&firstNum, &secondNum, &result);
    put_result(result);

    return 0;
}

void get_nums (int *firstNum, int *secondNum)
{
    printf("Введите два числа, над которыми вы хотите совершить действия.\n");
    printf("Введите число a: ");
    scanf("%d", &(*firstNum));
    printf("Введите число b: ");
    scanf("%d", &(*secondNum));
}

void put_menu (int *firstNum, int *secondNum, int *result)
{
    get_nums (&firstNum, &secondNum);

    printf("%d, %d", firstNum, secondNum);

    printf("Выберите операцию:\n");
    printf("1 a - b\n");
    printf("2 a + b\n");
    printf("3 a * b\n");
    printf("4 a / b\n");

    int answer;

    scanf("%d", &answer);

    switch(answer)
    {
        case 1:
        case_minus(firstNum, secondNum, &(*result));
        break;
        case 2:
        case_plus(firstNum, secondNum, &(*result));
        break;
        case 3:
        case_multiple(firstNum, secondNum, &(*result));
        break;
        case 4:
        case_div(firstNum, secondNum, &(*result));
        break;
        default:
        //put_menu(&(*firstNum), &(*secondNum), &(*result));
        break;
    }
}


void case_minus (int firstNum, int secondNum, int *result)
{
    *result = firstNum - secondNum;
}

void case_plus (int firstNum, int secondNum, int *result)
{
    *result = firstNum + secondNum;
}

void case_multiple (int firstNum, int secondNum, int *result)
{
    *result = firstNum * secondNum;
}

void case_div (int firstNum, int secondNum, int *result)
{
    *result = firstNum / secondNum;
}

void put_result (int result)
{
    printf("\nВаш результат:\n");
    printf("%d\n", result);
}


