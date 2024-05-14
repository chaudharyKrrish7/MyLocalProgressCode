a = document.getElementById("sub1")
a.innerHTML = "hi"

v = document.getElementsByTagName('p')
v[2].innerHTML = "heeeee"

document.write("helloagain")

function valForm() {
    let x = document.forms["form"]["fname"].value
    if (x == "") {
        alert("invalid")
        return false
    }
}

document.getElementById("sub2").style.color = "red"


// dom animations
function move(){
    let id = null
    const elem = document.getElementById("anm")
    let pos = 0
    clearInterval(id)
    id = setInterval(frame , 5)
    function frame(){
        if (pos == 350){
            clearInterval(id)
        }else{
            pos++
            elem.style.top = pos + "px"
            elem.style.left = pos + "px"
        }
    }
    
}
function moveB(){
    let id = null
    const elem = document.getElementById("anm")
    let pos = 350
    clearInterval(id)
    id = setInterval(frame , 5)
    function frame(){
        if (pos == 0){
            clearInterval(id)
        }else{
            pos--
            elem.style.top = pos + "px"
            elem.style.left = pos + "px"
        }
    }
    
}