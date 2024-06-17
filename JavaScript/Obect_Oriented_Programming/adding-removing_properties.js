/** 
 * In JavaScript, we can add properties to an object after it's created. We can also remove properties from an object.
 * - Adding properties
 * - Removing properties
 * - Dynamic properties
 * - Use cases
 * - Summary
 */


function Circle(radius) {
    this.radius = radius;
    this.draw = function() {
        console.log('draw');
    }
}

const circle = new Circle(10);

// We can add properties to an object by simply setting a property on that object. We can use dot notation or bracket notation.
circle.location = { x: 1 }; // dot notation
circle['location'] = { x: 1 }; // bracket notation

// When you want to dynamically access a property, use bracket notation
const propertyName = 'location';
circle[propertyName] = { x: 1 };

// Another use case for bracket notation is when the property name is not a valid identifier(such as a property name with a space)
const propertyName1 = 'center-location';
circle['center-location'] = { x: 1 };

// We can also delete properties from an object. A real-world use case for this is when you get a user object from a database and you want to return it to the client, but maybe that user object has certain properties that you don't want to send to the client. You don't want to send the password or the credit card number. You can delete those properties before sending the object to the client.
delete circle.location; // Again here we can use dot notation or bracket notation