#include <stdio.h>
int main()
{
    int t, A ,B;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        scanf("%d %d", &A, &B);
        printf("%d\n", A+B);
    }
    return 0;
}