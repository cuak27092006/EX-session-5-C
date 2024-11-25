#include <stdio.h>

int main() {
    float so1, so2, ketQua;
    int choice;

    printf("Nh?p s? th? nh?t: ");
    scanf("%f", &so1);
    printf("Nh?p s? th? hai: ");
    scanf("%f", &so2);

    do {
        printf("\nCALCULATOR\n");
        printf("1. T?ng 2 s?\n");
        printf("2. Hi?u 2 s?\n");
        printf("3. Tích 2 s?\n");
        printf("4. Thuong 2 s?\n");
        printf("5. Thoát\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                ketQua = so1 + so2;
                printf("T?ng 2 s? là: %.2f\n", ketQua);
                break;
            case 2:
                ketQua = so1 - so2;
                printf("Hi?u 2 s? là: %.2f\n", ketQua);
                break;
            case 3:
                ketQua = so1 * so2;
                printf("Tích 2 s? là: %.2f\n", ketQua);
                break;
            case 4:
                if (so2 != 0) {
                    ketQua = so1 / so2;
                    printf("Thuong 2 s? là: %.2f\n", ketQua);
                } else {
                    printf("Không th? chia cho 0.\n");
                }
                break;
            case 5:
                printf("Thoát chuong trình.\n");
                break;
            default:
                printf("L?a ch?n không h?p l?. Vui lòng th? l?i.\n");
        }
    } while (choice != 5);

    return 0;
}
