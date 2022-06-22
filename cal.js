const operator = prompt('Enter operator ( either +, -, * or / ): ');

const num1 = parseFloat(prompt('Enter first number: '));
const num2 = parseFloat(prompt('Enter second number: '));

let result;

// conditional statement ie if else
if (operator == '+') {
    result = num1 + num2;
}
else if (operator == '-') {
    result = num1 - num2;
}
else if (operator == '*') {
    result = num1 * num2;
}
else {
    result = num1 / num2;
}

// print result command
alert(`${num1} ${operator} ${num2} = ${result}`);
console.log(`${num1} ${operator} ${num2} = ${result}`);