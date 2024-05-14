console.log(window.location.href);

function ass(){
    window.location.assign("https://www.w3schools.com/js/js_window_location.asp")
}



document.getElementById("demo1").innerHTML = "cookieEnabled is " + navigator.cookieEnabled;
document.getElementById("demo2").innerHTML = "appname is " + navigator.appName;
document.getElementById("demo3").innerHTML = "codnaem is " + navigator.appCodeName;


// timeouts

window.setTimeout(hello , 2000)
function hello(){
    alert("hello")
}

window.setInterval(hi , 1000)
function hi(){
    const d = new Date()
    document.getElementById("d").innerHTML = d
}



