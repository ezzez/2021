#include <stdio.h>
int main(void){
    int n, r = 0;
    scanf("%d", &n);
    for(int i = 1; i<=n; i++){
        r += i;
    }
    printf("%d", r);
    return 0;
}