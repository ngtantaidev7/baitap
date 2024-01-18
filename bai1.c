#include <stdio.h>
void importArray(int a[], int n) {
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
    float result = sum(a, n);
    float avr = result / n;
    return avr;
}
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    importArray(a, n);
    printf("Sum is: %d\n", sum(a, n));
    printf("Average is: %.2f\n", average(a, n));
    return 0;
}