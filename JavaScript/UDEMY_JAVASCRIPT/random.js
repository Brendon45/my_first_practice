// Generate a random floating-point number between 0 (inclusive) and 1 (exclusive)
const randomValue = Math.random();
console.log("random value:", randomValue); // Output: a random number between 0 and 1

// Generate a random integer between 1 and 10
// Math.random() generates a number between 0 and 1
// Multiplying by 10 scales the range to 0 (inclusive) to 10 (exclusive)
// Math.floor() rounds down to the nearest integer, resulting in a range of 0 to 9
// Adding 1 shifts the range to 1 to 10
const randomInteger = Math.floor(Math.random() * 10) + 1;
console.log("random integer (1-10):", randomInteger); // Output: a random integer between 1 and 10

// Simulate a dice roll, generating a random integer between 1 and 6
// Math.random() generates a number between 0 and 1
// Multiplying by 6 scales the range to 0 (inclusive) to 6 (exclusive)
// Math.floor() rounds down to the nearest integer, resulting in a range of 0 to 5
// Adding 1 shifts the range to 1 to 6
const diceRoll = Math.floor(Math.random() * 6) + 1;
console.log("dice roll (1-6):", diceRoll); // Output: a random integer between 1 and 6