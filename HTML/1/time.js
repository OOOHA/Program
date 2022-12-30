function refreshTime() {
    const date = new Date();
    const year = date.getFullYear();
    const month = date.getMonth() + 1;
    const day = date.getDate();
    var hour = date.getHours() % 12;
    const ampm = date.getHours() >= 12 ? 'P.M.' : 'A.M.';
    var minute = date.getMinutes();
    var second = date.getSeconds();
    const week = date.getDay();
    hour = checkTime(hour);
    minute = checkTime(minute);
    second = checkTime(second);
    const weekday = ["Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"];
    const timeDisplay = document.getElementById("time");
    const dateString = year + "/" + month + "/" + day + " " + " " + weekday[week] + "    " + hour + ":" + minute + ":" + second + " "  + ampm;
    const formattedString = dateString.replace(", ", " - ");
    timeDisplay.textContent = formattedString;
  }
    setInterval(refreshTime, 1000);

    function checkTime(i) {
      if (i < 10) {i = "0" + i};
      return i;
    }