#include <stdio.h>

void add(void);
void sub(void);
void mult(void);
void div(void);


void add(void){
    float ad1;
    float ad2;

    printf("What is the first number?: ");
    scanf("%f", &ad1);

    printf("What is the second number?: ");
    scanf("%f", &ad2);
    float res = ad1 + ad2;
    printf("The answer is: %.2f\n", res);
}
void sub(void){
    float sub1;
    float sub2;

    printf("What is the first number?: ");
    scanf("%f", &sub1);

    printf("What is the second number?: ");
    scanf("%f", &sub2);
    float res = sub1 - sub2;
    printf("The answer is: %.2f\n", res);
}
void mult(void){
    float mul1;
    float mul2;

    printf("What is the first number?: ");
    scanf("%f", &mul1);

    printf("What is the second number?: ");
    scanf("%f", &mul2);
    float res = mul1 * mul2;
    printf("The answer is: %.2f\n", res);
}
void div(void){
    float div1;
    float div2;

    printf("What is the first number?: ");
    scanf("%f", &div1);

    printf("What is the second number?: ");
    scanf("%f", &div2);
    float res = div1 / div2;
    if (div2=0){
        printf("Math Error-Divided by Zero\n");
    } else{
        printf("%.2f\n", res);
    }

    printf("The answer is: %.2f\n", res);
}
int main(void){
     int user_response;
    printf("Welcome to the Calculator!\n");
    printf("Please Select an Option:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d",&user_response);

    if (user_response == 1){
        add();
    } else if (user_response == 2){
        sub();
    } else if (user_response == 3){
        mult();
    } else if (user_response == 4){
        div();
    }
    else {
        printf("Invalid Option\n");
    }
}

