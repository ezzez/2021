#include <stdio.h>
int main()
{
    int x, A ,B;
    scanf("%d", &x);
    for(int i = 1; i<=x; i++){
        scanf("%d %d", &A, &B);
        printf("%d", A+B);
    }
    return 0;
}