/*Tìm Tổng và Trung Bình*/
#include <stdio.h>
void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}
int sum(int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
float average(int a[], int n) {
    float tong = sum(a, n);
    float avr = tong / n;
    return avr;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    printf("Tong: %d\n", sum(a, n));
    printf("Trung binh cong: %.2f\n", average(a, n));
    return 0;
}