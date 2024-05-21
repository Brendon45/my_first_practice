#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *writeptr, *copyptr;
    int id;
    char name[20];
    int salary;
    char store_read_data[200];

    /* Opening file to write employee data */
    writeptr = fopen("employee_data.txt", "w+");
    if (writeptr == NULL)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    /* Prompting user for employee details */
    printf("Enter Employee name: ");
    scanf("%[^\n]%*c", name); // Using %s format specifier for name without &
    printf("Enter Employee ID: ");
    scanf("%d", &id);
    printf("Enter Employee salary: ");
    scanf("%d", &salary);

    /* Writing employee details to file */
    fprintf(writeptr, "Name = %s\nID = %d\nSalary = %d\n", name, id, salary);

    /* Creating a new file to copy the data */
    copyptr = fopen("copy_of_employee_data.txt", "w");
    if (copyptr == NULL)
    {
        perror("Error creating copy of file");
        fclose(writeptr); // Ensure the write file is closed in case of error
        exit(EXIT_FAILURE);
    }

    /* Copying data from original file to new file */
    rewind(writeptr); // Go back to start of the file
    while (fgets(store_read_data, sizeof(store_read_data), writeptr) != NULL)
    {
        fputs(store_read_data, copyptr);
    }

    /* Closing files */
    fclose(copyptr);
    fclose(writeptr);

    printf("Data copied successfully to 'copy_of_employee_data.txt'\n");
    return 0;
}