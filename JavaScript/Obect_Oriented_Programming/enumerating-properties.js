/**
 * Enumerating properties of an object
 * - for-in loop
 * - Object.keys()
 * - in operator
 * - Summary
 * 
 * This code demonstrates various ways to enumerate properties of an object in JavaScript.
 */

// Constructor function to create a Circle object
function Circle(radius) {
    this.radius = radius; // Define a property 'radius'
    this.draw = function() { // Define a method 'draw'
        console.log('draw');
    }
}

// Create a new Circle object
const circle = new Circle(10);

// Sometimes we need to iterate over or enumerate the properties in an object.
// We can do that using a for-in loop.

// Using for-in loop to enumerate all properties (including methods) in the object
for (let key in circle) {
    // This will print all properties and methods
    console.log(key, circle[key]); 

    // Only get the properties that are not functions
    if (typeof circle[key] !== 'function') { 
        console.log('Non-function property:', key, circle[key]);
    }
}

// To get all the keys in an object, we can use the Object.keys() method.
// Object.keys() returns an array of a given object's own enumerable property names.
const keys = Object.keys(circle); // Get all the keys and store them in an array
console.log('Keys using Object.keys():', keys); // Prints ['radius', 'draw']

// Sometimes you want to know if an object has a given property.
// We can do that using the in operator.
if ('radius' in circle) {
    console.log('Circle has a radius');
}

// Summary of different methods to enumerate properties in an object:
// 1. for-in loop: Iterates over all enumerable properties (including inherited properties).
// 2. Object.keys(): Returns an array of the object's own enumerable property names.
// 3. in operator: Checks if a property exists in an object.