## Loops in C programming

## 1. for Loop:
Syntax:
Code snippet:
for (initialization; condition; update) {
    // code to be executed
}
## Description:

The for loop is used when the number of iterations is known before entering the loop.
It consists of three parts: initialization (executed once at the beginning), condition (evaluated before each iteration), and update (executed after each iteration).
## 2. while Loop:
## Syntax:

while (condition) {
    // code to be executed
}
## Description:

The while loop is used when the condition is checked before entering the loop.
It continues to execute the code block as long as the specified condition is true.
The loop may not execute at all if the condition is false initially.
## 3. do-while Loop:
## Syntax:
do {
    // code to be executed
} while (condition);
## Description:

The do-while loop is used when you want to ensure the loop body executes at least once.
It executes the code block first and then checks the condition.
The loop continues to execute as long as the specified condition is true.
## 4. Loop Control Statements:
break:

## Description:

The break statement is used to terminate the loop prematurely.
It transfers control to the statement immediately following the loop.
Useful for exiting a loop based on a certain condition.
continue:

## Description:

The continue statement is used to skip the rest of the loop body and move to the next iteration.
It is often used to bypass certain iterations based on a condition without exiting the loop.
goto:

## Description:

The goto statement transfers control to a labeled statement within the same function.
Generally discouraged due to its potential to make code less readable and maintainable.
It should be used sparingly and with caution.
These loops and control statements provide the necessary tools to create structured and efficient code for repetitive tasks in C programming. Understanding when to use each loop construct is essential for writing clear and maintainable code.
