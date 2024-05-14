console.log( Boolean(10>9)) //true

c = 0
console.log(Boolean(c)); //false

let y=4
let x=3
console.log(Boolean(x=y));//true
console.log(Boolean(x==y));//false
console.log(Boolean(x===y));//false

let text = ""
if (x<12) text = "hello"
console.log(text);//hello 

// logical operators
// && both true
// ||one true
// ! not

// The Nullish Coalescing Operator (??)
// The ?? operator returns the first argument if it is not nullish (null or undefined).
// Otherwise it returns the second argument.

let name1 = undefined;
let name2 = "raju"
let text1 = "missing";
let result1 = name1 ?? text1;
let result2 = name2 ?? text1;
console.log( "The name is " + result1 )//The name is missing
console.log( "The name is " + result2 )//The name is raju

console.log( Math.log2(8))