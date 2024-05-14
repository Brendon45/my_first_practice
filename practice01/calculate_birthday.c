#include <stdio.h>

// Function prototype declaration
int calculateBirthday(int currentYear);

int main() {
    int currentYear;
    
    // Prompt user for input
    printf("Enter the current year: ");
    scanf("%d", &currentYear);
    
    // Call the calculateBirthday function and store the result
    int birthdayDay = calculateBirthday(currentYear);
    
    // Display the calculated birthday day
    printf("Your birthday day calculated for year %d is: %d\n", currentYear, birthdayDay);
    
    return 0;
}

// Definition of calculateBirthday function
int calculateBirthday(int currentYear) {
    int birthDay;

    // Calculate the day of your birthday
    birthDay = (currentYear % 100) * 10 + ((currentYear / 100) % 10);

    return birthDay;
}
