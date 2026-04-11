#include <stdio.h>

int main()
{
    int conversion;
    float number;

    printf("0 : For Exit \n");
    printf("1 : Kms To Miles\n");
    printf("2 : inches To Foot \n");
    printf("3 : pound to kgs \n");
    printf("4 : inches To meter \n");

    printf("Enter a Operation that You Want for conversion : ");
    scanf("%d", &conversion);

    while (1)
    {
        printf("Enter a Number (press 0 : for quit): ");
        scanf("%f", &number);

        
        
        if (conversion == 1)
        {
            printf("%f km to Miles is : %f miles\n", number, number * 0.621371);
        }
        else if (conversion == 2)
        {
            printf("%f inches to Foot is : %f foot\n", number, number / 12);
        }
        else if (conversion == 3)
        {
            printf("%f pound to kgs is : %f kgs\n", number, number / 2.54);
        }
        else if (conversion == 4)
        {
            printf("%f inches to Meter is : %f meter \n", number, number * 0.0254);
        }
        else if (conversion == 0)
        {
            break;
        }
        else
        {
            printf("Invalid Opeariton try again \n");
            break;
        }
        if (number == 0){
           break;
        }
    }

    return 0;
}