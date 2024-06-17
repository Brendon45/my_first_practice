/**
 * Factory Functions (a.k.a Factory Pattern)
 * - A function that returns an object
 * - We can create multiple objects using a factory function
 * - We can pass arguments to a factory function to create different objects
 * - We can use factory functions to create objects with different properties
 * - We can use factory functions to create objects with different methods
 */

// Factory Function to create a circle object
function createCircle(radius) {
    // Return an object with the given radius and a draw method
    return {
        radius,
        draw: function() {
            console.log('draw');
        }
    };
}

// Create a circle object using the factory function
const circle = createCircle(1);

// Call the draw method on the circle object
circle.draw(); // Output: draw
