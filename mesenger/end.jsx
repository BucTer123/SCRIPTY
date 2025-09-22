function App() {
    const [messages, setMessages] = React.useState([]);
    const [text, setText] = React.useState("");
    const [name, setName] = React.useState("Anon");

    const sendMessage = () => {
        if (!text.trim()) return;
        const newMag = { user: name, text, time: new Date().toLocaleDateString() };
        setMessages(prev => [...prev, newMag]);
        setText("");
    };


    return (
        <div className="chat-container">
            <h2>MESENGER</h2>

            <div className="messages">
                {messages.map((msg, i) => {
                    <div key={i} className="message">
                     <strong>{msg.user}</strong> [{msg.time}]: {msg.text}
                     </div>
                })}
        </div>

        <div className="input-container">
            <input
            type="text"
            placeholder="name (Anon)"
            value={name}
            onChange={ (e) => setName(e.target/value)}
            />
            <input
            type="text"
            placeholder="Message...."
            value={text}
            onChange={ (e) => setText(e.target.value)} 
            onKeyDown={ (e) => e.key === "Enter" && sendMessage() }
         />
         <button onClick={ sendMessage }>Send</button>
        </div>
      </div>
    )
}