/*Initialize a sentence*/
let sentence = " javascript is amazing";

/*Find the index of the substring "is"*/
let indexOfIs = sentence.indexOf("is");

/*Log the index of the substring "is" to the console*/
console.log(indexOfIs); // Output: 12

/*Initialize another sentence*/
let sentence1 = " i love javascript";

/*Create a case-insensitive regular expression to match "javascript"*/
let regex = /javaScript/i;

/*Use the regular expression to find a match in sentence1*/
let regexResult = sentence1.match(regex);

/*Log the result of the regular expression match to the console*/
console.log(regexResult); // Output: [ 'javascript', index: 8, input: ' i love javascript', groups: undefined ]