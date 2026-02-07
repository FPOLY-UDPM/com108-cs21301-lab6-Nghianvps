/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHIA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    // Nhap mang
    for (i = 0; i < n; i++)
    {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Sap xep giam dan
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (mang[i] < mang[j])
            {
                int temp = mang[i];
                mang[i] = mang[j];
                mang[j] = temp;
            }
        }
    }

    // Xuat mang sau khi sap xep
    printf("Mang sau khi sap xep giam dan:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", mang[i]);
    }

    return 0;
}
