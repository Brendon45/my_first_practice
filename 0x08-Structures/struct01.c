#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* main - Entry Point
* Description:
* Return: 0 (Success)
*/

struct Members
{
    char name[20];
    int age;
    int mark;
};
int main(void)
{
    struct Members member1;
    struct Members member3;
    struct Members member4;
    struct Members member5;

	struct Members member7;

    strcpy(member1.name, "Kundai Jeje");
    member1.age = 21;
    member1.mark = 64;

    struct Members member2 = {"Shumirai Jeje", 29, 53};

    printf("%s is %d years old and he got %d%% in his final exam\n", member1.name, member1.age, member1.mark);
    printf("%s is %d years old and he got %d\n", member2.name, member2.age, member2.mark);

    return (0);
}
