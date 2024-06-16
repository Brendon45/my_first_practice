// Enabling strict mode
"use strict";

// Uncommenting the next line would throw a ReferenceError because the variable is not declared
// undeclaredVariable = 42;

function silentErrorFunction() {
    // Create an object with a property 'prop'
    let obj = { prop: 42 };

    // Using 'with' is not allowed in strict mode and will throw a SyntaxError
    // The 'with' statement is commented out to avoid the error
    /*
    with (obj) {
        // Accessing 'prop' within the 'with' statement
        console.log(prop); // This would log 42 if 'with' was allowed
    }
    */
}

// Calling the function
silentErrorFunction();