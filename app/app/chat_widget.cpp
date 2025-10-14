#include "chat_widget.h"

ChatWidget::ChatWidget(QWidget* parent) : QWidget(parent) {
	auto *layout = new QVBoxLayout(this);
	chatList = new QListWidget(this);
	input = new QLineEdit(this);
	sendButton = new QPushButton("Send", this);

	layout->addWidget(chatList);
	layout->addWidget(input);
	layout->addWidget(sendButton);

	connect(sendButton, &QPushButton::clicked, this, &ChatWidget::sendMessage);
}

void ChatWidget::sendMessage() {
	QString text = input->text().trimmed();
	if (!text.isEmpty()) {
		chatList->addItem("You: " + text);
		input->clear();
	}
}