// Create a new Set with initial numbers, including duplicates
const uniqueNumbers = new Set([1, 2, 3, 4, 5, 1, 2]);

// Print the unique numbers Set
console.log(uniqueNumbers); // Output: Set { 1, 2, 3, 4, 5 }

// Create an empty Set to store programming languages
const programmingLanguages = new Set();

// Add programming languages to the Set
programmingLanguages.add("javascript");
programmingLanguages.add("python");
programmingLanguages.add("java");

// Print the programming languages Set
console.log(programmingLanguages); // Output: Set { 'javascript', 'python', 'java' }

// Print the size of the Set
console.log(programmingLanguages.size); // Output: 3

// Check if 'javascript' is in the Set
console.log(programmingLanguages.has("javascript")); // Output: true

// Delete 'python' from the Set
programmingLanguages.delete("python");

// Print the programming languages Set after deletion
console.log(programmingLanguages); // Output: Set { 'javascript', 'java' }
