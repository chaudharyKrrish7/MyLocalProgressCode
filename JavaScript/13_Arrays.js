const krrish = [4,5,6,7]
for (i = 0 ; i < krrish.length ;i++) {
    console.log(krrish[i]);
}
//arrays are muatble
krrish[2] = 55
console.log(krrish);
// console.log(krrish.toString());

krrish.push("34")
console.log(krrish);

krrish.sort()
console.log(krrish);


//tocheck if its array or not
let a = Array.isArray(krrish)
console.log(a);

//joins
let kh = krrish.join("  #  ")
console.log(kh);

//pop to remove and push to add
//shift

console.log( krrish.unshift(4))//adds 4 to start
console.log(krrish);


//slice() to extract and splice() to remove sliced


console.log(krrish.lastIndexOf(4));
console.log(krrish.reverse());
console.log(krrish.sort());






