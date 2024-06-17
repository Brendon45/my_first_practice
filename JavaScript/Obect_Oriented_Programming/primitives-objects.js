/**
 * Primitives (value types) - Number, String, Boolean, Symbol, undefined, null
 * Reference types - Object, Function, Array
 * - Primitives are copied by their value
 * - Objects are copied by their reference
 * 
 */


// Primitives (value types)
let x = 10;
let y = x;

x = 20;

// reference/objects (reference types)
let a = { value: 10 };
let b = a;

a.value = 20;


// Another example
let number = 10;

function increase(number) {
    number++;
}

increase(number);
console.log(number); // 10

// Let's change the function to an object
let obj = { value: 10 };

function increase(obj) {
    obj.value++;
}

increase(obj);
console.log(obj); // 11