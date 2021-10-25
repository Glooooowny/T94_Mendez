#include <Stdio.h>


int main()
{
    int price, choice, a ;

    printf("Select your order \n");
    printf("[1] Burger(P25) \n");
    printf("[2] Fries (P20) \n");
    printf("[3] Milk tea(P75) \n");
    printf("Choices: ");
    scanf("%d",& choices);

    switch (choice)
    {
    case 1:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price <25)
        {
            printf("You dont have enough funds.");
        }
        else

        {
            a= price -25;
            printf("You have purchased Burger. \n");
            printf("change: %d, a");

        }
        break;

        case 2:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price < 20)
        {
            printf("You dont have enough funds.");
        }
        else
        {
            a= price -20;
            printf("You have purchased Fries. \n");
            printf("change: %d, a");
        }
        break;

        case 3:
        printf("Input payment: ");
        scanf("%d", &price);
        if (price < 75)
        {
            printf("You dont have enough funds.");
        }
        else
        {
            a=price -75;
            printf("You have purchased Milk tea. \n");
            printf("change: %d, a");
        }
        break;
        default:
        printf("The item that you wanted does not exist");
    }
    return 0;
}
