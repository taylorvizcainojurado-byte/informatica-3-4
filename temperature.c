#include <stdio.h>
int main(void)
{
    int f;
    int c;
    printf("What is the temperature in Farenheight=");
    scanf("%d",&f);
    int T = f-32/1.8;
    printf("%d°F= %d°C", f,T);
}
