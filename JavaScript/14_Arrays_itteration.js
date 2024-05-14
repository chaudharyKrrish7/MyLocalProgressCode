let num =[5,6,7,8,9,34]
//for
for(i = 0 ;i<num.length ; i++){
    console.log(num[i]);
}
//for each
num.forEach((i) => {
    console.log(i * i);
})
//checking array
console.log(Array.isArray(num));
//for off
for (let i of num) {
    console.log(i**2);
}
//for in
for (const i in num) {
   console.log(num[i]);
}
