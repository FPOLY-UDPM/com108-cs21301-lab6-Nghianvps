/******************************************************************************
 * Họ và tên: [NGUYỄN VĂN NGHIA]
 * MSSV:      [PS43782]
 * Lớp:       [COM108]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main()
{
    int n, i;

    // Nhập số phần tử
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int mang[n];

    // Nhập mảng
    for (i = 0; i < n; i++)
    {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;
    int count = 0;

    // Duyệt mảng
    for (i = 0; i < n; i++)
    {
        if (mang[i] % 3 == 0)
        {
            tong += mang[i];
            count++;
        }
    }

    // Xử lý kết quả
    if (count > 0)
    {
        float tb = tong / count;
        printf("Trung binh cac so chia het cho 3: %.2f\n", tb);
    }
    else
    {
        printf("Khong co so nao chia het cho 3 trong mang\n");
    }

    return 0;
}
