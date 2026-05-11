#include <stdio.h>

void c_to_f(void);
void f_to_c(void);

int main(void){
    int user_response;
    printf("Welcome to the Temperature Converter!\n");
    printf("Select an Option:\n");
    printf("1. Celcius to Farenheit\n");
    printf("2. Farenheit to Celcius\n");
    scanf("%d",&user_response);

    if (user_response == 1){
        c_to_f();
    } else if (user_response == 2){
        f_to_c();
    } else {
        printf("Invalid Option\n");
    }
    c_to_f();
    f_to_c();

}

void c_to_f(void){
    int c;
    printf("What is the temperature in Celcius?: ");
    scanf("%d", &c);
    int f = (c*1.8) + 32;
    printf("%d*C = %d*F\n",c,f);
}

void f_to_c(void){
    int f;
    printf("What is the temperature in Farenheit?: ");
    scanf("%d", &f);
    int c = (f-32)/1.8;
    printf("%d*F = %d*C\n",f,c);
}
