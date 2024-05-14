//                        MAPS
const fruits = new Map([
    ["apples" , 45],["bananas",23],["oranges",78]
])
fruits.set("pineapple",67)
console.log(fruits);
console.log(fruits.get("apples"));
//typeof is objects


//         ARROW FUNCTIONS
let myfunc = () => {
    console.log(56);
}
myfunc()