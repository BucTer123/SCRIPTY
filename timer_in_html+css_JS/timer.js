let seconds = 0;
let interval = null;

function updateTimes() {
    document.getElementById('timer').textContent = formatTime(seconds);
}

function startTimer() {
    if (interval) return;
    interval = setInterval(() => {
        seconds++;
        updateTimer();
    }, 1000);
}

function pauseTimer() {
    clearInterval(interval);
    interval = null;
}

function resetTimer() {
    pauseTimer();
    seconds = 0;
    updateTimer();
}

updateTimer();
