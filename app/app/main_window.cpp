#include "main_window.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
	auto* chat = new ChatWidget(this);
	setCentralWidget(chat);
	setWindowTitle("Messenger");
	resize(500, 600);
}