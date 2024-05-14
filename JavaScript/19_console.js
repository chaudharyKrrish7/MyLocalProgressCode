console.log(console);
console.error("this is error")
console.assert(5>4)
console.assert(4>5)
// console.clear()
obj = {
    a:1,
    b:2,
    c:3
}

console.table(obj)
console.warn("pranked")
console.info("hello")
console.time("a")
console.timeEnd("a")

console.time("forloop")
for (let i = 0 ; i<5 ; i++){
    console.log(233);
}
console.timeEnd("forloop")