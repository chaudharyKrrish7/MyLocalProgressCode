//question1
let marks = {
    harry:90,
    joe:9,
    mama:89,
    krrish:56,
    
}

for (let i = 0; i < Object.keys(marks).length; i++) {
    console.log(Object.keys(marks)[i]);
    console.log(marks[Object.keys(marks)[i]]);
}

//question2
for (i in marks) {
    for (j in marks) {
        console.log(i);
        console.log(marks[j]);
    }
    
}