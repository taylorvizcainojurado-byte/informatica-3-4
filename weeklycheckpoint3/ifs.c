#include <stdio.h>
int main(void)
{
    int a = 5;//= means assignment
    int b = 5;
    int c = 10;
    //We made 3 variables

    printf("%d == %d is %d \n", a, b, a == b);// == means comparison
    printf("%d == %d is %d \n", a, c, a == c);
    //0 is false and 1 is true
    printf("%d != %d is %d \n", a, c, a != c);//!= is "not equal to"

    //Program that identifies negative numbers
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    if (number < 0) {//if the number is negative then it will print this
        printf("%d is a negative number. \n",number);
    } else{//else is what it will write if it does not fit the function
        printf("%d is a positive number. \n",number);
    }

}
