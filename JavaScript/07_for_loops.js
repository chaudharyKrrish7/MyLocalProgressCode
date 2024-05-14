// for loop
sum = 0
n = 5
for(let i = 1 ; i < n ; i++){
    sum = sum + i
    console.log(sum);
}

//for in loop
let obj = {
    harry: 56,
    krrish:45,
    shashy:78
}

for(let a in obj){
    console.log(a);
    console.log(obj[a]);
}


//for of loop
a = [1,3,4,5,6]
for(i of a){
    console.log(i);
}

