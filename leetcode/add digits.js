// let str = num.toString()
// let varSum = Number(str[0])
// if(str.length < 2){
//     console.log((str))
// }else{
//     while(str.length > 1){
//         let varSum = Number(str[0])
//         for ( i = 1 ; i < str.length  ; i++) {
//             varSum = varSum + Number(str[i])  
//         } 
//         num = varSum
//         str = num.toString()
//         if (str.length < 2) {
//             console.log((str))
//         }
//     } 
 
// }


// revise code

let num = 23506
let str = num.toString();
while (str.length > 1) {
    let sum = 0;
    for (let i = 0; i < str.length; i++) {
        sum += Number(str[i]);
    }
    str = sum.toString();
}
console.log (Number(str))




