const readline = require('readline');

const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

function what(num) {
  let result = num;

  if (num % 3 === 0) {
    result = "Fizz";
    if (num % 5 === 0) {
      result += " Buzz";
      return result;
    }
  }

  if (num % 5 === 0) {
    return "Buzz";
  }

  return result;
}

rl.question("Enter a number for n: ", (answer) => {
  const n = parseInt(answer);

  for (let i = 0; i <= n; i++) {
    console.log(what(i));
  }

  rl.close();
});