/**
 * Every object in JavaScript has a constructor property that references the function that was used to create that object.
 * - The constructor property is a reference to the function that was used to create an object
 * - The constructor property is available on all objects
 * - The constructor property is available on all objects created with a constructor function
 * - The constructor property is available on all objects created with a factory function
 * - The constructor property is available on all built-in objects
 * - The constructor property is available on all primitive values
 * - The constructor property is available on all functions
 * - The constructor property is available on all arrays
 * - The constructor property is available on all regular expressions
 * - The constructor property is available on all dates
 * - The constructor property is available on all numbers
 * - The constructor property is available on all strings
 * - The constructor property is available on all booleans
 * - The constructor property is available on all symbols
 * - The constructor property is available on all maps
 * - The constructor property is available on all sets
 */

/*Creating instances of built-in objects*/
let str = new String("Hello"); // Creating a String object
let bool = new Boolean(true); // Creating a Boolean object
let num = new Number(123); // Creating a Number object

console.log(str.constructor); // Output: [Function: String]
console.log(bool.constructor); // Output: [Function: Boolean]
console.log(num.constructor); // Output: [Function: Number]

/*In JavaScript, functions are objects, and they have a constructor property*/

/*Constructor Function*/
function Circle(radius) {
    this.radius = radius; // Property
    this.draw = function() { // Method
        console.log('draw');
    }
}

console.log(Circle.constructor); // Output: [Function: Function]

/*Creating a Circle instance using the Circle constructor function*/
const circle1 = new Circle(1);
console.log(circle1.constructor); // Output: [Function: Circle]

/*Using the Function constructor to create a function*/
const Circle1 = new Function('radius', `
    this.radius = radius;
    this.draw = function() {
        console.log('draw');
    }
`); /*new Function() is not recommended for creating functions*/

/*Creating a Circle instance using the Function constructor*/
const circle2 = new Circle1(1);
console.log(circle2.constructor); // Output: [Function: Function]

/*Calling a function with a specified 'this' value using call() and apply()*/
Circle.call({}, 1); // {} is the value of this
Circle.apply({}, [1]); // {} is the value of this

/*Creating another Circle instance*/
const another = new Circle(1);
console.log(another.constructor); // Output: [Function: Circle]