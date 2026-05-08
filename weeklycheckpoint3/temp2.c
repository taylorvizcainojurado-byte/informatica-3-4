#include <stdio.h>
int main(void)
{
    int f;
    int c;
    printf("What is the temperature in Celcius=");
    scanf("%d",&c);
    int T = f-32/1.8;
    int TF = c*1.8+32;
    printf("%d°C = %d°F\n", c, TF);
    if (c<0){
        printf("❄️ Freezing Weather\n");
    } else if (c<10) {
        printf("🥶 Very Cold Weather\n");
    } else if (c<20){
        printf("🧥 Chilly Weather\n");
    } else if (c<30){
        printf("🖼️ Normal Weather\n");
    } else if (c<40){
        printf("☀️ Hot Weather\n");
    } else{
        printf("🔥 Very Hot Weather\n");
    }




}
