/*Define a class Calculator*/
class Calculator {
    /*Instance method for addition*/
    add(a, b) {
        return a + b;
    }

    /*Static method for multiplication*/
    static multiply(a, b) {
        return a * b;
    }
}

/*Create an instance of Calculator*/
const calculatorInstance = new Calculator();

/*Use the instance method add() on calculatorInstance*/
console.log(calculatorInstance.add(5, 8)); // Output: 13

/*Define a class Circle*/
class Circle {
    /*Constructor to initialize with radius*/
    constructor(radius) {
        this.radius = radius;
    }

    /*Instance method to calculate area*/
    calculateArea() {
        return Math.PI * this.radius ** 2;
    }

    /*Static method (factory method) to create Circle instance from diameter*/
    static createFromDiameter(diameter) {
        const radius = diameter / 2;
        return new Circle(radius);
    }
}

/*Create a Circle instance with radius 5*/
const smallCircle = new Circle(5);
/*Calculate and log the area of smallCircle*/
console.log(smallCircle.calculateArea()); /*Output: approximately 78.54*/

/*Create a Circle instance using the static method createFromDiameter*/
const largeCircle = Circle.createFromDiameter(10);
/*Calculate and log the area of largeCircle*/
console.log(largeCircle.calculateArea()); /*Output: approximately 78.54*/