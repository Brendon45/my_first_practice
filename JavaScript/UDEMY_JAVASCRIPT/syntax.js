/*
var myVar = 10;
let myLet = 'hello';
const myConst = true;
*/

// Declare an object named person with properties and a method
let person = {
    // Define properties of the person object
    firstName: 'John',    // firstName property with value 'John'
    lastName: 'Smith',    // lastName property with value 'Smith'
    age: 25,              // age property with value 25
    
    // Define a method greet within the person object
    greet: function() {
        // The greet method logs a greeting message using the firstName and lastName properties of the person object
        console.log('hello, ' + this.firstName + ' ' + this.lastName + '');
    }
};

// Call the greet method of the person object
person.greet();