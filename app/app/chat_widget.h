#pragma once
#include <QWidget>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

class ChatWidget : public QWidget {
	Q_OBJECT 
public:
	explicit ChatWidget(QWidget* parent = nullptr);

private slots:
	void sendMessage();

private:
	QListWidget *chatList;
	QLineEdit *input;
	QPushButton *sendButton;
};
