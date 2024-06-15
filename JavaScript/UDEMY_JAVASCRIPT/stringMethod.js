// Example 1: Using toUpperCase() and toLowerCase() methods
let text = "javasrcipt is amazing";

// Convert the string to uppercase
let upperCaseText = text.toUpperCase();
// Convert the string to lowercase
let lowerCaseText = text.toLowerCase();

// Print the results
console.log("upper case : ", upperCaseText);
console.log("lower case : ", lowerCaseText);

// Example 2: Using slice() and substring() methods
let lyrics = "oh i wanna dance with somebody!";

// Extract a portion of the string using slice()
let sliceText = lyrics.slice(4, 10);
// Extract another portion using substring()
let subStringText = lyrics.substring(11, 17);

// Print the results
console.log("Sliced text : ", sliceText);
console.log("SubString text : ", subStringText);

// Example 3: Using replace() method
let song = " i will always love you ";

// Replace a substring in the string
let newSong = song.replace("love", "music");

// Print the original and modified strings
console.log("original song : ", song);
console.log("modified song : ", newSong);
