import {useState, useEffect} from 'react';

const [num, setNum] = useState(0);


document.getElementById("button_1").addEventListener("click", setNum + 1);
document.getElementById("button_2").addEventListener("click", setNum + 2);
document.getElementById("button_3").addEventListener("click", setNum - 1);
document.getElementById("button_4").addEventListener("click", setNum - 2);

