# Reverse-Polish-Notation-Calculator1
Reverse Polish Notation Calculator programmed in C++ utilizing the stack data structure.
Use accordingly:

Example:

Enter in an equation.

RPN equation: 5 6 +   //Note: When the number 5, 6, and operand '+' are entered they are pushed into the stack accordingly.
answer:11

Example 2:

Enter in an equation.

RPN equation: 4 5 6 + -

/* Breakdown: pop() the last two numbers (6, 5) off stack! 
then push ( 5 + 6) back onto stack */

//Now you hacve 4, 11, '-'(subtract operand) \

// Four minus eleven by RPN order of operations.

//Final Answer
answer:-7


Example 3:

Enter in an equation.

RPN equation: 2 4 8 * /

/* pop() the last two numbers (8, 4) off stack! 
then push ( 4 * 8) back onto stack */

//Now you have 2, 32, and operand '/'(division) 

/*pop() the last two numbers (32, 2) off stack! 
then push ( 2 / 32) back onto stack*/

// Two divided by thirty two by RPN order of operations.

//Final Answer
answer:0.0625



