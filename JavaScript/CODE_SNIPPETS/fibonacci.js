const readline = require('readline');

// Create an interface for input and output
const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

// Ask the user for the number of terms
rl.question('Enter the number of terms: ', (input) => {
    // Parse the input and validate it
    const number = parseInt(input, 10);

    if (isNaN(number) || number <= 0) {
        console.log('Please enter a positive integer.');
    } else {
        let n1 = 0,
            n2 = 1,
            nextTerm;

        console.log('Fibonacci Series:');

        for (let i = 1; i <= number; i++) {
            console.log(n1);
            nextTerm = n1 + n2;
            n1 = n2;
            n2 = nextTerm;
        }
    }

    // Close the readline interface
    rl.close();
});
