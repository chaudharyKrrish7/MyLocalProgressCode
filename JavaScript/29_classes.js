//classes


class marks{
    constructor(name , num){
        this.a = name
        this.b = num
    }
}

const mark = new marks("krish" , 24)
document.getElementById("marks").innerHTML = mark.a + ":" + mark.b


