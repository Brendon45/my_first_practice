/*function calculateSum(a, b){
    const result = a + b;
    return result;
}
const x = 10;
const y = 20;
const sum = calculateSum(x, y);

console.log('the sum is : ', sum);*/


function greet(name){
    if(name){
        console.log('hello, ' + name + '!');
    }else{
        console.log('hello, stranger! ');
    }
}
greet('Pamela');