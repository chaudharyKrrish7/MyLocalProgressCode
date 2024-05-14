// Exercise 1
// -
// Guess the number
// Write a Java Script program to generate a random number and
// store it in a variable. The program then takes an input from the user to tell them whether the guess was correct, greater or lesser than the original number.
// 100 - (no of guesses) is the score of the user The program is expected to terminate once number is guessed!!

let x = Math.floor((Math.random() * 100) + 1);

let chances;
for ( chances = 0 ;chances<10 ; chances++){ 
    let p = prompt("Enter ur guess!!")
    let v = Number.parseInt(p)
    let t = 0
    if (v>x) {
        console.log("go lower");
    }
    else if (v==x) {
        console.log("congratulations , u guessed it right!!");
        t++
        
    }
    else{
        console.log("go upper");
    }
    if (t==1){
        break
    }
    
    if (chances==10) {
        console.log("Sorry ur out of guesses!!");
    }
    
}
console.log("score is :" , 10 - chances);



