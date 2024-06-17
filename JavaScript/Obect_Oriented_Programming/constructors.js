/**
 * Objective: Understand the difference between Factory Functions and Constructor Functions in JavaScript (ES6 - Both used to create objects)
 * - Factory Functions: A function that returns an object 
 * - Constructor Functions: A function that returns an object
 * - The difference is how they are called
 * - Factory Functions: camelCase
 * - Constructor Functions: PascalCase
 * - Constructor Functions: use the 'new' keyword
 * - Factory Functions: do not use the 'new' keyword
 * - Constructor Functions: use 'this' to set properties
 * - Factory Functions: do not use 'this' to set properties
 */

/*Factory Function*/
function createCircle(radius) { // camelCase
    return { // object literal notation
        radius, // property
        draw: function() { // method
            console.log('draw'); // implementation
        }
    };
}

/*Create an object using the factory function*/
const circle = createCircle(1);
console.log(circle); // { radius: 1, draw: [Function: draw] }
circle.draw(); // Output: draw

/*Constructor Function*/
function Circle(radius) { // PascalCase
    // 'this' refers to the new object being created
    this.radius = radius; // Set the property on the new object
    this.draw = function() { // Define a method on the new object
        console.log('draw'); // implementation
    };
}

/*Create an object using the constructor function*/
const another = new Circle(1); // 'new' keyword creates a new empty object and sets 'this' to point to that object
console.log(another); // Circle { radius: 1, draw: [Function] }
another.draw(); // Output: draw