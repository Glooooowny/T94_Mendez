#include <stdio.h>
#include <conio.h>

int main()
{
    float centigrade;
    printf("Enter the temperature in centigrade :: ");
    scanf("%f",&centigrade);
    printf("*****The display output is *****/n/n");
    if (centigrade<0)
    {
        printf("Freezing wheather.");

    }
    else if ((centigrade<=0)&&(centigrade<=10))
    {
        printf("Very cold weather.");

    }
    else if ((centigrade>10)&&(centigrade<=20))
    {
        printf("cold weather.");
    }
    else if ((centigrade>20)&&(centigrade<=30))
    {
        printf("Normal in temperature.");
    }
    else if (centigrade>30&&(centigrade<=40))
    {
        printf("itS hot.");
    }
    else if (centigrade>=40)
    {
        printf("its very hot.");
    }
    return 0;
}
