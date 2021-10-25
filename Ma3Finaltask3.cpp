
#include<stdio.h>


int main()
{
    int price, choice, payment,change ;

    printf("Select your order \n");
    printf("[1] Burger(P25) \n");
    printf("[2] Fries (P20) \n");
    printf("[3] Milk tea(P75) \n");
    printf("Choice: ");
    scanf("%d",& choice);

     switch (choice)
    {
    case 1:
    price = 25;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Burger Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Apparently you do not have enough money");
}
    break;

    case 2:
    price = 20;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your Fries Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else{
    printf("Apparently you do not have enough money");
}
     break;


     case 3:
    price = 75;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Milk Tea Sir/Ma'am.\n");
    change = payment-price;
    printf("\nChange: %d\n", change);
}
else {
  printf("Apparently you do not have enough money");
}
  break;
   default:
   printf("The item that you wanted does not exist");
}
return 0;
}
