//question 1
// let age = 10
// if(age>10 && age<20){
//     console.log("age bw 10 and 20");
// }
// else{
//     console.log("age not bw 10 and 20");
// }

// question 2
let age = 12
switch(age){
    case 12:
        console.log("age is 12");
        break
    case 22:
        console.log("age is 22");
        break
    default:
        console.log("normal age");
}


//question 3
let a = 90
if (a%2==0 && a%3 == 0) {
    console.log("number divisible by 6");    
}
else{
    console.log("not div by 6");
}

//question 4
let a = 90
if (a%2==0 || a%3 == 0) {
    console.log("number divisible by 6");    
}
else{
    console.log("not div by 6");
}

//question 5
a = 19
console.log("you can" , (a>18) ? "drive" : "not drive");
