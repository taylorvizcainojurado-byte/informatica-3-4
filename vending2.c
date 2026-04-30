#include <stdio.h>
int main(void)
{
    // create variables for first snack quesadilla
    float price1=129.99;
    int stock1 = 25;
    char sellcode='a';
    //snack 2 price calzon
    float price2=56.72;
    int stock2 = 13;
    char sellcode2='b';
    //snack 3 price chips
    float price3=25.99;
    int stock3 =89;
    char sellcode3='c';
    printf("Welcome to the Snack Shop!\n");
    printf("---------------------------\n");
    printf("Item\t\tPrice\tQuantity\tCode\n");
    printf("Quesadilla\t$%.2f\t%d\t\t%c\n", price1, stock1, sellcode);
    printf("Calzon\t\t$%.2f\t%d\t\t%c\n", price2, stock2, sellcode2);
    printf("Chips\t\t$%.2f\t%d\t\t%c\n", price3, stock3, sellcode3);



}

