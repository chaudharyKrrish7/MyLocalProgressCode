let string = "";
let elements = document.querySelectorAll('#button')
Array.from(elements).forEach((element) => {
    element.addEventListener('click' , (item) =>{
        if (item.target.innerHTML == "=") {
            string = eval(string)
            document.getElementById('otp').innerHTML = string
        }else if(item.target.innerHTML == "Clear"){
            string = ""
            document.getElementById('otp').innerHTML = string
        }
        else{
            if(item.target.innerHTML == "Π"){
                string = document.querySelector('.pii').value
                document.getElementById('otp').innerHTML = string
            }else{
                string = string + item.target.innerHTML
                document.getElementById('otp').innerHTML = string
            }
            
        }
    })
})