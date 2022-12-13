/*Кириллова Е.С.
Программа заполняет матрицу числами от 1 до N2 улиткой */

#include <stdio.h>
#define ROWS 5
#define COLUMNS 5

int main()
{

    int i;
    int d;
    int c;
    int n = 1;
    int myArr[ROWS*COLUMNS];
    int myDoubleArr[ROWS][COLUMNS];

    for()

    for(i = 0; i < ROWS*COLUMNS; i++, n++)
    {
        myArr[i] = n;
        //printf("%d", myArr[i]);
    }

    for(d = 0; d < 1; d++)
    {
        for(c = 0, i = 0; c < COLUMNS; c++, i++)
        {
            myDoubleArr[d][c] = myArr[i];
            printf("%d", myDoubleArr[d][c]);
        }
    }

    for(d = 1; d < ROWS; d++, i++)
    {
        myArr[d][COLUMNS-1] = myArr[i];
    }

    /*for(i = 2; i < ROWS; i++, n++)
    {
        myArr[i][0] = n;
        //printf("%d", myArr[i][0]);
        //printf("\n");
    }*/

    fo






    /*
    int i;
    int d;
    int c;
    int n = 1;
    int myArr[ROWS][COLUMNS];

    for(i = 0; i < 1; i++)
    {
        for(d = 0; d < COLUMNS; d++, n++)
        {
            myArr[i][d] = n;
            //printf("%d", myArr[i][d]);
        }
        //printf("\n");
    }

    for(i = 1; i < ROWS; i++, n++)
    {
        myArr[i][COLUMNS-1] = n;
        //printf("%d", myArr[i][COLUMNS-1]);
        //printf("\n");
    }

    for(i = 2; i < ROWS; i++, n++)
    {
        myArr[i][0] = n;
        //printf("%d", myArr[i][0]);
        //printf("\n");
    }

    for(i = 0; i < ROWS; i++)
    {
        for(d = 0; d < COLUMNS; d++, n++)
        {
            myArr[i][d] = n;
            printf("%d", myArr[i][d]);
        }
        printf("\n");
    }





    /*
    for(i = 0, c = COLUMNS; i < ROWS; i++, c--)
    {
        for(d = 0; d < COLUMNS; d++, n++)
        {
            if(i == 0)
            {
                myArr[][d] = n;
                printf("%d", myArr[i][d]);
            }
            if(i > 0)
            {
                myArr[i][ROWS-1] = n;
                printf("%d", myArr[i][ROWS-1]);
            }
        }
        printf("\n");
    }*/



    return 0;
}
