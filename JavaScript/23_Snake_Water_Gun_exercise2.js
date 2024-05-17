// Exercise 2 

// Stone Scissor paper or Use Javascript to create a game of Stone Scissor & paper. The to enter go w the game should ask you The Computer should be able to randomly generate 5, W or G and declare Win or loss using Use confirm and prompt wherever required 

let random = Math.floor(Math.random() * 3)  
playOpt = ["Stone" , "Scissor" , "paper"] 
let playMore = 0
while (playMore == 0) {
    let gameInpt = prompt("Enter Your Choice!! ----> 0 for Stone , 1 for Scissor and 2 for paper")
    gameInpt = Number.parseInt(gameInpt)
    if (random == gameInpt) {
        console.log("That's a Draw!! it was" , playOpt[random] , "and u had" ,  playOpt[gameInpt]  , "too!!");
    }
    else if (random < gameInpt) {
        console.log("Sorry u loose it was a" , playOpt[random] , "and u had a" ,  playOpt[gameInpt]);       
    }
    else{
        console.log("yyayy u won it was a" , playOpt[random] , "and u had a" , playOpt[gameInpt]);
    }
    
    let a = prompt("u want to play agan? y - yes and n - no")
    if (a == "n") {
        playMore++
        break
    }    
}