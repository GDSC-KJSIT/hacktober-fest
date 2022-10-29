
function func()
{
    var x = document.getElementById("main-nav");
    if(x.className === "navbar")
    {
        x.className = "resp";
    }
    else{
        x.className = "navbar";
    }
}