let demarr = [3,4,3,7,29,45,6,44,23]


for ( i = demarr.length -1 ; i > 0; i--) {
    j = Math.floor(Math.random() * (i+1))
    temp = demarr[j]
    demarr[j] = demarr[i]
    demarr[i] = temp
    
}
console.log(demarr)
