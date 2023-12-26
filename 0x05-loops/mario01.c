#include <stdio.h>

/**
 * main - Entry point
 * Description - Mario more program on CS50 the prints two pyramids of the
 * same height facing each other
 * Return: 0 (Success)
 */

int main(void)
{
    int height, spaces, hashes, line;
    do {
        printf("Enter the height\n");
        scanf("%d", &height);
    } while (height < 0 || height > 20);

    for (line = 1; line <= height; line++)
    {
        //printing spaces
        for (spaces = height -line; spaces >= 1; spaces--){
            printf(" ");
        }
        //printing '#'
        for (hashes = 1; hashes <= line; hashes++)
        {
            printf("#");
        }
        printf("  ");
        for(int i = 0; i < line; i++)
        {
            printf("#");
        }

        printf("\n");
    }

    return (0);
}
