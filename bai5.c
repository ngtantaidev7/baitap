#include <stdio.h>
int main() {
    int n,m;
    scanf("%d%d",&n,&m);
    for (int i=n; i>1; i--) {
        if (n % i == 0 && m % i == 0) {
        printf("uoc chung lon nhat la %d",i);
        break;
        }
    }    
    return 0;
}