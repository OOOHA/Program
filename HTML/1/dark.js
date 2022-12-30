function myFunction() {
    var element = document.body;
    element.classList.toggle("dark");

    var elem = document.getElementById("button"); 
    if (elem.value=="Dark Mode") 
    {
        elem.value = "Light Mode"; 
        localStorage.setItem("theme", "Dark");
    }
    else 
    {
        elem.value = "Dark Mode";
        localStorage.setItem("theme", "Light");
    }
}

var theme = localStorage.getItem("theme")
if(theme == "Dark"){
    myFunction();
}