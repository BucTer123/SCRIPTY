const userList = document.getElementsByClassName('userList');
const chatUser = document.getElementById('chat-user');
const chatMessage = document.getElementById('chat-message');
const messageInput = document.getElementById('message-input');
const sendBtn = document.getElementById('send-btn');
const user = document.getElementById('user');
const chatMessages = "Messages";

let currentUserId = null;

user.forEach(u => {
    const li = document.createElement('li');
    li.textContent = u.name;
    li.addEventListener('click', () => openChat(u.id));
    userList.appendChild(li);
});

function openChat(id) {
    currentUserId = id;
    chatUser.textContent = user.find(u => u.id === id).name;
    renderMessages();
}

function renderMessages() {
    chatMessage.innerHTML = '';
    (messages[currentUserId] || []).forEach(msg => {
        const div = document.createElement('div');
        div.className = `message ${msg.render === "me" ? "sent" : "received"}`;
        div.textContent = msg.text;
        chatMessages.appendChild(div);
    });
    chatMessages.scrollTop = chatMessage.scrollHeight;
}

sendBtn.addEventListener('click', sendMessage);
messageInput.addEventListener('keypress', e => {
    if (e.key === 'Enter') sendMessage();
});

function sendMessage() {
    const text = messageInput.trim();
    if (!text || currentUserId === null) return;

    messages[currentUserId].push({ sender: "me", text });
    renderMessages();
    messageInput.value = "";
}