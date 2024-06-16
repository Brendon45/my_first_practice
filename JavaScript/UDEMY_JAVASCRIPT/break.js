/*
for (let i = 0; i < 5; i++) {
    console.log(`iteration ${i + 1}`); // Log the current iteration number
    if (i == 2) {
        console.log("breaking out of the loop"); // Log the breaking condition
        break; // Exit the loop when i equals 2
    }
}
*/

/*Define a variable to represent the current day*/
const day = "tuesday";

/*Use a switch statement to handle different values of the day variable*/
switch (day) {
    case "monday":
        console.log("today is monday! "); /*Log message if day is "monday"*/
        break; /*Exit the switch statement*/

    case "tuesday":
        console.log("it's tuesday! "); /*Log message if day is "tuesday"*/
        break;

    case "wednesday":
        console.log("it's wednesday! "); /*Log message if day is "wednesday"*/
        break;
    
    default:
        console.log("it's another day."); /*Log message for any other day*/
}