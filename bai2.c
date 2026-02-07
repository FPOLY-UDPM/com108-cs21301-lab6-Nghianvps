/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHIA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
// VÍ DỤ

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// HÀM PHÁT SINH NGẪU NHIÊN CÁC PHẦN TỬ CỦA MẢNG
void randomArray(int arr[], int size, int min, int max)
{
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

// *max là trỏ tới biến max bên ngoài
void timMaxMin(int arr[], int size, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > *max)
        {
            *max = arr[i];
        }
        if (arr[i] < *min)
        {
            *min = arr[i];
        }
    }

    printf("Gia tri lon nhat: %d\n", *max);
    printf("Gia tri nho nhat: %d\n", *min);
}

// HÀM IN MẢNG
void printArray(int arr[], int size)
{
    printf("Các phần tử của mảng là:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n, i;

    printf("Nhập số lượng phần tử của mảng: ");
    scanf("%d", &n);

    int arr[n];

    randomArray(arr, n, 1, 10);
    printArray(arr, n);
    timMaxMin(arr, n, &i, &n);

    // int max = arr[0];
    // int min = arr[0];

    // for (i = 1; i < n; i++)
    // {
    //     if (arr[i] > max)
    //     {
    //         max = arr[i];
    //     }

    //     if (arr[i] < min)
    //     {
    //         min = arr[i];
    //     }
    // }

    // printf("Gia tri lon nhat: %d\n", max);
    // printf("Gia tri nho nhat: %d\n", min);

    return 0;
}
