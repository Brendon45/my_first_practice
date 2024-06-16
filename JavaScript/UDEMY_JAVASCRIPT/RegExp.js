/*Define a regular expression pattern to match the string 'hello'*/
const pattern = /hello/;
/*Define a text string to search within*/
const text = 'hello, javascript!';

/*Use the test() method of the regular expression to check if 'text' contains 'hello'*/
console.log(pattern.test(text)); /*Output: true*/

/*Define a regular expression pattern to match any vowel character (a, e, i, o, u) globally*/
const patternWithClasses = /[aeiou]/g;
/*Define a text string containing vowels and other characters*/
const textWithVowels = 'hello, javascript! this is a demonstration.';

/*Use the match() method of the string to find all occurrences of vowels defined in 'patternWithClasses'*/
console.log(textWithVowels.match(patternWithClasses));
/*Output: [ 'e', 'o', 'a', 'i', 'a', 'i', 'i', 'a', 'e', 'o', 'a', 'i', 'o', 'a', 'i', 'o', 'a', 'i', 'o' ]*/