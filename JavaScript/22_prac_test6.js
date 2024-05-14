//question1
let a = prompt("enter age")
a = Number.parseInt(a)

const cardrive  = () =>{
     a>=18 ? alert("drive"):alert("not drive")
    
}
cardrive()

//question2
bool = 0
while(bool==0){
    let a = prompt("enter age")
    
    a = Number.parseInt(a)
    if (a<0) {
        console.error("invalid age")
        alert("invalid age")
        break
    }
    const cardrive  = () =>{
        a>=18 ? alert("drive"):alert("not drive")
    }
    cardrive()
    let p = prompt("do u want to continue")
    if(p=="n"){
        bool++
    }
}

//question4
if (a>4) {
    location.href = "https://www.google.com/"
}

//question5
color = prompt("eneter color")
document.body.style.background = color 
