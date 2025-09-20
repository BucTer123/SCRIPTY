import React from "react";


const Snake = ({ snake }) => {
    return (
        <>
        {snake.map((segment, index) => (
            <div
            key={index}
            className="snake"
            style={{ left: `${segment.x * 20}px`, top: `${segment.y * 20}px`}}
            />
        ))}
            </>
    );
};