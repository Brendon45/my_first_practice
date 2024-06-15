// Function to check if a number is prime
function isPrime(num) {
    // If the number is less than or equal to 1, it is not prime
    if (num <= 1) {
        return false;
    }
    
    // Loop from 2 to the square root of the number
    // If the number is divisible by any of these, it is not prime
    for (let i = 2; i <= Math.sqrt(num); i++) {
        if (num % i === 0) {
            return false;
        }
    }
    
    // If no divisors were found, the number is prime
    return true;
}

// Loop through numbers from 0 to 100
for (let i = 0; i <= 100; i++) {
    // Check if the current number is prime
    if (isPrime(i)) {
        // If it is, print it to the console
        console.log(i);
    }
}
