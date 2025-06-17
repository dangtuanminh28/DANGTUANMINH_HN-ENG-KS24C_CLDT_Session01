#include <stdlib.h>

int *mallocArray(int n)
{
    // Cap phat bo nho cho mot mang co n phan tu kieu int
    int *arr = (int *)malloc(n * sizeof(int));

    // Vong lap khoi tao gia tra cho tung phan tu trong mang
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }

    // Tra ve con tro toi mang đã đc cap phat va khoi tao
    return arr;
}