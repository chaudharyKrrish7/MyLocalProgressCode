//que1
let arr = [1,2,3,4,5,6,7]
let a = prompt("enter a number")
a = Number.parseInt(a)
arr.push(a)
console.log(arr);

//que2
let arr = [1,2,3,4,5,6,7]

do{
    let a = prompt("enter a number")
    v = Number.parseInt(a)
    arr.push(v)
}while(v != 0)
console.log(arr);


//que3
let arr = [23 ,45,50,60]
let divarr = arr.filter((i) =>{
    return i%10==0
})
console.log(divarr);

//que4
let arr = [3,4,5,6]
let arrsqr = arr.map((i) => {
    return i**2
})
console.log(arrsqr);

//que5
let arr = [3,4,5,6,7]
let arrmul = arr.reduce((i1 , i2) => {
    return i1 * i2
})
console.log(arrmul);
