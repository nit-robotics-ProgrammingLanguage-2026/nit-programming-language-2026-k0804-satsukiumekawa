#include <stdio.h>

/* 整数の2進数表現を逆順にした値を求める関数 */
void reverseBinary(int *inputNumber, int *reversedNumber)
{
    int currentValue = *inputNumber;
    int reversedValue = 0;

    /* 下位ビットから順に取り出して逆順に並べる */
    while (currentValue > 0)
    {
        reversedValue = (reversedValue << 1) | (currentValue & 1);
        currentValue >>= 1;
    }

    *reversedNumber = reversedValue;
}

int main(void)
{
    int inputNumber;
    int resultNumber;

    scanf("%d", &inputNumber);

    /* 正の整数以外は NG */
    if (inputNumber <= 0)
    {
        printf("NG");
        return 0;
    }

    /* ビット列を反転した値を計算 */
    reverseBinary(&inputNumber, &resultNumber);

    printf("%d,%d", inputNumber, resultNumber);

    return 0;
}
