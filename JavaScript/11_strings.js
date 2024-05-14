console.log("hello world");
let str1 = 'hello'
let str2= "hello"
console.log(str1 , str2);

console.log(str1[4]);// o

//template literalls
let boy1 = "pramod"
let boy2 = "rahul"
let sentence = `${boy1} is a friend of ${boy2}`
console.log(sentence);

s = "hinder\n"
console.log(s.length); //7 instead of 8


// STRING METHODS   
let name = "   krrish"
console.log(name.length);
console.log(name.toUpperCase());
console.log(name.toLowerCase());
console.log(name.slice(2,4));
console.log(name.trim());
console.log(name.concat(" hello"));
console.log(name.replace("ri" , "uy" ))


//print a string through for loop

demstr = "hello"
result = ""
for (let i = 0; i < 5; i++) {
    console.log(result.concat(demstr[i]));
    // console.log(result[i])
}
