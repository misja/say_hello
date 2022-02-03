/**
 * Ask and remember a user's name and say hello
 *
 * Run as:
 *
 * node interactive.js
 */

const readline = require('readline');

const names = [];

const io = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

function response(value) {
    if (value == 'exit') {
        io.write('Bye!\n');
        io.close();
    } else if (names.includes(value)) {
        io.write(`Hello ${value}, we have met before :)\n`);
        question();
    } else {
        names.push(value);
        io.write(`Hi ${value}!\n`);
        question();
    }
}

function question() {
    io.question('Your name: ', response);
}

question();
