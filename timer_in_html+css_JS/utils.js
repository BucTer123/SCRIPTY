function formatTime(seconds) {
    let hrs = Math.floor(seconds / 3600);
    let mins = Math.floor((seconds % 3600) / 60);
    let secs = seconds % 60;

    return '${hrs.toString().padStart(2, 0)}:' +
           '${mins.toString().padStart(2, 0)}:' +
           '${secs.toString().padStart(2, 0)}:';
}