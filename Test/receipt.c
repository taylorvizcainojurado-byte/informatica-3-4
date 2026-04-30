#include <stdio.h>
int main(void)
{
    char item[50];
    float price;
    int quantity;
    printf("Please insert item: ");
    scanf("%s",&item);
    printf("Please insert price: ");
    scanf("%f",&price);
    printf("Please insert quantity: ");
    scanf("%d",&quantity);

    float total = price*quantity;

    printf("\n");
    printf("----------------------------------\n");
    printf("EREWHONE GROCERIES\n");
    printf("----------------------------------\n");
    printf("Item\tQuantity\tPrice\n");
    printf("%s\t%d\t\t$%.2f\n",item,quantity,price);
    printf("----------------------------------\n");
    printf("Total:\t\t\t");
    printf("$%.2f\n",total);
    printf("----------------------------------\n");
    printf("Thank you for your purchase!\n");


}
