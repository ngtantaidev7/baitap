#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=n; i>1; i--) {
        if (n % i == 0 && m % i == 0) {
        printf("Greatest common divisor %d",i);
        break;
        }
    }    
    return 0;
}