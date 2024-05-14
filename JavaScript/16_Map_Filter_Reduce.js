const a = [1,2,3,4,5,6,2]
// //map creates a new array
// a.map((value , index , Array) =>{
//     console.log(value + index , index , Array);
//     return value + index
// })
// console.log(a);


// //filters
// let b = a.filter((i) =>{
//     return i<23
// })
// console.log(b);

//Reduce
let n = a.reduce((i1, i2) => {
    return i1 + i2
})

console.log(n);