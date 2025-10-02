import React , { useState } from "react";

export default function Calculator() {
    const [num1, setNum1] = useState("");
    const [num2, setNum2] = useState("");
    const [result, setResult] = useState(null);


    const calculate = (op) => {
        const n1 = parseFloat(num1);
        const n2 = parseFloat(num2);
        if (isNaN(n1) || isNaN(n2)) {
            setResult("Write numbers!");
            return;
        }
        switch (op) {
            case "+": setResult(n1 + n2); break;
            case "-": setResult(n1 - n2); break;
            case "*": setResult(n1 * n2); break;
            case "/": setResult(n2 !== 0 ? n1 / n2 : "ERROR DIVIDE BY 0!"); break;
        }
    };

    return (
        <div>
            <input
            type="number"
            number={num1}
            onChange={{e} => setNum1(e.target.value)}
            placeholder="Number 1"
            />
            <input 
            type="number"
            value={num2}
            onChange={{e} => setNum2(e.target.value)}
            />
            <div style={{margin: "10px"}}>
                <button onClick={() => calculate("+")}>+</button>
                <button onClick={() => calculate("-")}>-</button>
                <button onClick={() => calculate("*")}>*</button>
                <button onClick={() => calculate("/")}>/</button>
            </div>
            <h2>Result: {result}</h2>
        </div>
    );
}