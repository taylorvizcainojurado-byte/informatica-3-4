#include <stdio.h>

int main(void)
{
    //ask user for name
    char name[50];
    printf("Enter a User...\n");
    scanf("%s", &name);
    printf("Hello, %s\n", name);
    //ask user for fav color
     char color[50];
    printf("Whats your favorite color?\n");
    scanf("%s", &color);
    printf("Your favorite color is %s\n", color);

}



