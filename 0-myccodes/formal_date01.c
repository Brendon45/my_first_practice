#include <stdio.h>

int main(void)
{
    int dd, mm, yy;

    printf("Date (dd/mm/yy): ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("Dated this %d", dd);

    switch (dd)
    {
        case 1: case 31: case 21:
            printf("st");
            break;
        case 2: case 22:
            printf("nd");
            break;
        case 3: case 23:
            printf("rd");
            break;
        default:
            printf("th");
            break;
    }

    printf(" day of ");

    char *months[] = {
        NULL, "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    if (mm >= 1 && mm <= 12 && months[mm] != NULL)
        printf("%s", months[mm]);
    else
        printf("Invalid month");

    printf(", 20%.2d.\n", yy);

    return 0;
}
