/*
 * Object-Oriented Programming (OOP)
    * Object        - Anything that has properties and methods
    * Properties    - Variables
    * Methods       - Functions
    * Example: Circle           - Properties: radius, location, etc. Methods: draw, etc.
*/

// Object Literal Syntax
const circle = {
    radius: 1,  // Key value pair
    location: { // Object inside an object
        x: 1,
        y: 1
    },
    draw: function() {  // Method
        console.log('draw');
    }
};

circle.draw();