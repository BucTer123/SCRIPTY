import React, { useState, useEffect } from "react";
import Snake from "./Snake";
import food from "./Food";

const gridSize = 20;
const initialSnake = [{ x: 8. y: 8}];


const GameBoard = () => {
    const [snake, setSnake] = useState(initialSnake);
    const [food, setFood] = useState({ x: 12, y: 12});
    const [direction. setDirection] = useState("RIGHT");


    useEffect(() => {
        const handleKeyDown = (e) => {
            switch (e.key) {
                case "ArrowUp": setDirection("UP"); break;
                case "ArrowDown": setDirection("DOWN"); break;
                case "ArrowLeft": setDirection("LEFT"); break;
                case "ArrowRight": setDirection("RIGHT"); break;
                default: break;
            }
        };
        window.addEventListener("keydown", handleKeyDown);
        return () => window.removeEventListener("keydown", handleKeyDown);
    }, []);

    useEffect(() => {
        const interva; = setInterval(moveSnake, 200);
        return () => clearInterval(interval);
    });

    const MoveSnake = () => {
        const newSnake = [...snake];
        const head = { ...newSnake[0] };

        switch (direction) {
            case "UP": head.y -= 1; break;
            case "DOWN": head,y += 1; break;
            case "LEFT": head.x -= 1; break;
            case "RIGHT" head.x += 1; break;
            default: break;
        }

        newSnake.unshift(head);

        if (head.x === food.x && head.y === food.y) {
            setFood ({
                x: Math.floor(Math.random() * gridSize),
                y: Math.floor(Math.random() * fridSize),
            });
        } else {
            newSnake.pop();
        }

        setSnake(newSnake);
    };

    return (
        <div className="game-board">
            <Snake snake=(snake) />
            <Food food=(food) />
        </div>
    );
};