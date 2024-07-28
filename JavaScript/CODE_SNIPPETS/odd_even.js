// Define an array of numbers
const arr = [1, 2, 3, 4, 5];

// Loop through each element in the array
for (let i = 0; i < arr.length; i++) {
    // Check if the index is even
    if (i % 2 == 0) {
        // Print that the current element is odd if the index is even
        console.log(arr[i] + " is odd");
    } else {
        // Print that the current element is even if the index is odd
        console.log(arr[i] + " is even");
    }
}