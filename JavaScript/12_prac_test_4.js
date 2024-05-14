//que2
str = "hello"
if(str.includes("hel")){
    console.log("yes");
}else{
    console.log("off");
}
if(str.startsWith("hel")){
    console.log("yes");
}else{
    console.log("off");
}

//que3
strM = "hello"
console.log(strM.toUpperCase());
console.log(strM.toLowerCase());

//que5 (dosent wokr coz strings are immutable)
strM[2] = "g"
console.log(strM[2]);
console.log(strM);

