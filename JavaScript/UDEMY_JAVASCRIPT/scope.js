// Declare a global variable
let globalvariable = "I am a global";

function exampleFunction() {
  // Declare a local variable inside the function
  let localVariable = "I am a local";
  
  // Access and print the global variable
  console.log(globalvariable); // Output: I am a global
  
  // Access and print the local variable
  console.log(localVariable); // Output: I am a local
}

// Call the function to see the output
exampleFunction();

// Access and print the global variable outside the function
console.log(globalvariable); // Output: I am a global

// Block scope example
if (true) {
  // Declare block-scoped variables using let and const
  let blockLetVariable = "I'm block-scoped with let";
  const blockConstVariable = "I'm block-scoped with const";
}

// Uncommenting the following lines will cause a ReferenceError 
// because blockLetVariable and blockConstVariable are not accessible outside the block
// console.log(blockLetVariable); // ReferenceError: blockLetVariable is not defined
// console.log(blockConstVariable); // ReferenceError: blockConstVariable is not defined

function exampleFunctionVar() {
  if (true) {
    // Declare a variable using var inside a block
    var functionScopedVariable = "I'm function-scoped with var!";
  }
  
  // Access and print the var-declared variable inside the function
  console.log(functionScopedVariable); // Output: I'm function-scoped with var!
}

// Call the function to see the output
exampleFunctionVar();

// Uncommenting the following line will cause a ReferenceError 
// because functionScopedVariable is not accessible outside the function
// console.log(functionScopedVariable); // ReferenceError: functionScopedVariable is not defined
