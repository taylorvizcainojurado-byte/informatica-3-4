#include <stdio.h>
int main(void)
{
    int x;
    int y;
    printf("What is the height=");
    scanf("%d",&x);
    printf("What is the width=");
    scanf("%d",&y);
    int A = x*y;
    int P = 2*x+2*y;
    printf("Area=%d\n",A);
    printf("Perimeter=%d\n",P);

}
