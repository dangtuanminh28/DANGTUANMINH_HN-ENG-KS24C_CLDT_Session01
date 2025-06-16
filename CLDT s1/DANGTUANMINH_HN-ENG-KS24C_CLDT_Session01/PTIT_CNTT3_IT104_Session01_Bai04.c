#include <stdio.h>

// Cach 1: Su dung vong lap de tinh tong
// Do phuc tap thoi gian: O(n)
int sumByLoop(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

// Cach 2: Su dung cong thuc tong cap so cong: sum = n * (n + 1) / 2
// Do phuc tap thoi gian: O(1)
int sumByFormula(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n = 100;

    // Tinh tong bang vong lap
    int total1 = sumByLoop(n);
    printf("Tong bang vong lap (O(n)) la: %d\n", total1);

    // Tinh tong bang cong thuc
    int total2 = sumByFormula(n);
    printf("Tong bang cong thuc (O(1)) la: %d\n", total2);

    return 0;
}
