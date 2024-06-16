// Define a class Animal
class Animal {
    constructor(name) {
        this.name = name;
    }

    // Method to make a generic sound
    makeSound() {
        console.log(`${this.name} makes a generic sound`);
    }
}

// Define a class Cat that extends Animal
class Cat extends Animal {
    // Override the makeSound method from Animal
    makeSound() {
        console.log(`${this.name} says meow!`);
    }
}

// Create an instance of Cat named 'Whiskers'
const myCat = new Cat('Whiskers');

// Call the makeSound method on myCat
myCat.makeSound(); // Output: Whiskers says meow!