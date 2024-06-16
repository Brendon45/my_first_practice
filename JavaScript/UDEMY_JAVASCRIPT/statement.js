// Get the current hour using the Date object
let hour = new Date().getHours();
let greeting;

// Determine the appropriate greeting based on the current hour
if (hour < 12) {
  greeting = "Good morning";  // If the hour is less than 12 (before noon)
} else if (hour < 18) {
  greeting = "Good afternoon";  // If the hour is between 12 and 18 (afternoon)
} else {
  greeting = "Good evening";  // If the hour is 18 or greater (evening)
}

// Print the greeting to the console
console.log(greeting);
