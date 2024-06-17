/**
 * Abstraction: hide the details and complexity and show only the essentials
    * reduce complexity
    * reduce impact of change
    * increase reusability
    * increase maintainability
    * increase flexibility
    * increase security
    * increase performance
    * increase productivity
    * increase scalability
    * increase reliability
    * increase availability
    * increase usability
    * increase testability
    * increase readability
    * increase extensibility
*/


// Let's introduce some complexity in this example. Abstraction will help us to reduce the complexity.
function Circle(radius) {
    this.radius = radius;

    this.defaultLocation = { x: 0, y: 0 };

    this.computeOptimumLocation = function(factor) { // this method is not part of the interface
        // ...
    }


    this.draw = function() {
        this.computeOptimumLocation(0.1); // this method is not part of the interface
        console.log('draw');
    }
}

const circle0 = new Circle(10); // this object has too many details


// Private Properties and Methods. We can use closures to define private properties and methods. scope of the variables and functions defined inside the constructor function is limited to the constructor function.
function Circle(radius) {
    this.radius = radius;

    let defaultLocation = { x: 0, y: 0 }; // private property

    let computeOptimumLocation = function(factor) { // private method
        // ...
    }


    this.draw = function() {
        let x, y; // local variables

        computeOptimumLocation(0.1); // this method is not part of the interface
        // defaultLocation
        // this.radius

        console.log('draw');
    }
}

const circle1 = new Circle(10);
circle1.defaultLocation; // undefined
// circle.computeOptimumLocation(); // error
circle1.draw(); // draw


// Getters and Setters
function Circle(radius) {
    this.radius = radius;

    let defaultLocation = { x: 0, y: 0 }; // private property

    this.getDefaultLocation = function() { // getter for defaultLocation property
        return defaultLocation;
    }

    this.draw = function() {
        console.log('draw');
    }

    Object.defineProperty(this, 'defaultLocation', { // getter and setter for defaultLocation property
        get: function() {
            return defaultLocation;
        },
        set: function(value) { // setter for defaultLocation property
            if (!value.x || !value.y)
                throw new Error('Invalid location.');

            defaultLocation = value;
        }
    });
}

const circle = new Circle(10);
// circle.defaultLocation = 1; // error
circle.draw(); // draw


// So to recap, use ObjectDot Property - Object.defineProperty() to define getters and/or setters. This way you can hide the complexity of your object and expose a simple interface to the outside world. This is a key principle in object-oriented programming called encapsulation.