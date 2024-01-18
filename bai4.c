#include <stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str);
    int i, j;
    char temp;
    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[100];
    printf("nhap chuoi ky tu: ");
    scanf("%d", &str);
    fgets(str, sizeof(str), stdin);
    reverseString(str);
    printf("chuoi dao nguoc :%s", str);
    return 0;
}