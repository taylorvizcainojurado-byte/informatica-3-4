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
    printf("Vending Machine Stock\n");
    printf("----------------------\n");
    printf("Item Name: Quesadilla\n");
    printf("Price: $%.2f\n", price1);
    printf("Quantity Available: %d\n", stock1);
    printf("Selection Code: %c\n", sellcode);
    printf("\n");
    printf("Item Name: Calzon\n");
    printf("Price: $%.2f\n", price2);
    printf(" Quantity Available: %d\n", stock2);
    printf("Selection Code: %c\n", sellcode2);
    printf("\n");
    printf("Item Name: Chips\n");
    printf("Price: $%.2f\n", price3);
    printf("Quantity Available: %d\n", stock3);
    printf("Selection Code: %c\n", sellcode3);

}
