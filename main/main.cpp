#include <iostream>
#include <string>
#include <filesystem>
#include <curl/curl.h>
#include <ifstream>
#include <ofstream>
using namespace std;
using namespace filesystem;
using namespace ofstream;

int main() {
	string root = create_directory("/root");
	string filesystem = create_directory("filesystem");
	cout<<"Welcome!\n";
	string command;
	cout<<"Write the command or write 'help'   :";
	cin>>command;
	if (command == "help") {
		cout<<"1 	help\n";
		cout<<"2 	exit\n";
		cout<<"3	start_calculator\n";
		cout<<"4 	ls\n";
		cout<<"5 	cd\n";
		cout<<"6	mkdir\n";
		cout<<"7	remove\n";
		cout<<"8 	cp install\n";
		cout<<"9 	cp update\n";
		cout<<"10 	cp remove\n";
	}
	if (command == "exit") {
		cout<<"Shutdown.....";
		return 0;
	}
	if (command == "start_calculator") {
		cout<<"Welcome!\n";
		float a;
		float b;
		string calc;
		cout<<"Write the first number   :";
		cin>>a;
		cout<<"Write the second number  :";
		cin>>b;
		cout<<"Write the command or write help  	:";
		cin>>calc;
		if (calc == "help") {
			cout<<"1 	+\n";
			cout<<"2 	-\n";
			cout<<"3 	*\n";
			cout<<"4 	/\n";
			cout<<"5 	exit\n";
			cout<<"6 	clear\n";
			cout<<"7 	root\n";
			cout<<"8 	power\n";
			cout<<"9 	square\n";
			cout<<"10 	triangle\n";
		}
		if (calc == "+") {
			cout<<a + b<<endl;
		}
		if (calc == "-") {
			cout<<a - b<<endl;
		}
		if (calc == "*") {
			cout<<a * b<<endl;
		}
		if (calc == "/") {
			if (b == 0) {
				cout<<"ERROR!: DIVIDE BY ZERO!";
			} else {
				cout<<a / b<<endl;
			}
		}
		if (calc == "exit") {
			cout<<"Shutdown.....";
			return 0;
		}
		if (calc == "clear") {
			cout<<"Cleaning.....";
			return 0;
		}
		if (calc == "root") {
			cout<<a / a<<endl;
		}
		if (calc == "power") {
			cout<<a * a <<endl;
		}
		if (calc == "square") {
			cout<<"________\n";
			cout<<"|      |\n";
			cout<<"|      |\n";
			cout<<"--------\n";		
		}
		if (calc == "triangle") {
			cout<<"  /\      \n";
			cout<<" /  \     \n";
			cout<<"/    \    \n";
			cout<<"------    \n";
		}
	}
	if (command == "ls") {
		cout<<"Choice the ls";
		string ls;
		cin>>ls;
		if (ls == true) {
			cout<<"File: /root    <---- This is root file you dont delete this ";
			cout<<"File  /filesystem  <---- This is root file you dont delete this";
		} else {
			cout<<"ERROR!: DONT KNOW HOW ABOUT YOU";
			return 0;
		}
	}
	if (command == "cd") {
		cout<<"Choice the cd";
		string cd;
		cin>>cd;
		if (cd == true) {
			cout<<"root@" + cd "~/  :";
		} else {
			cout<<"ERROR!: DONT KNOW HOW ABOUT YOU!";
			return 0;
		}
	}
	if (command == "mkdir") {
		cout<<"Write the name for file   : ";
		string mkdir;
		cin>>mkdir;
		if (mkdir == true) {
			create_directory(mkdir);
			cout<<"Created" + mkdir + "!";
		} else {
			cout<<"ERROR!: I DONT KNOW HOW ABOUT YOU! ";
		}
	}
	if (command == "remove") {
		cout<<"Write the name for file to delete   	:";
		string remove;
		cin>>remove;
		if (remove == true) {
			remove(remove);
			cout<<"Removed" + remove<<endl;
		}
		if (remove == "remove_all") {
			remove_all;
			cout<<"Removed all! (but dont root and filesystem  ;)  )     ";
		}
	}
	if (command == "cp install") {
		cout<<"Choice the app to install  :";
		string app;
		cin>>app;
		if (app == "nvim") {
			cout<<"Installing neovim......";
			CURL * curl = curl_easy_init();
			if (!curl) return 1;
			string response;
			curl_easy_setopt(curl, CURLOPT_URL, "https://github.com/neovim/neovim.git");
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writecallback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

			curl_easy_perform(curl)
			curl_easy_cleanup(curl);
			cout<<response<<endl;
		}
		if (app == "firefox") {
			cout<<"Installing firefox";
			CURL * curl = curl_easy_init();
			if (!curl) return 1;
			string response;
			curl_easy_setopt(curl, CURLOPT_URL, "https://github.com/mozilla-firefox/firefox.git");
			curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, writecallback);
			curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

			curl_easy_perform(curl);
			curl_easy_cleanup(curl);
			cout<<response<<endl;
		}
		
	}
	if (command == "cp update") {
		cout<<"Installing updates";
		file("File_update_1");
		cout<<"Installing update(1/8)   :";
		file("File_update_2");
		cout<<"Installing update(2/8)    :";
		file("File_update_3");
		cout<<"Installing update(3/8)    :";
		file("File_update_4");
		cout<<"Installing update(4/8)    :";
		file("File_update_5");
		cout<<"Installing update(5/8)    :";
		file("File_update_6");
		cout<<"Installing update(6/8)	 :";
		file("File_update_7");
		cout<<"Installing update(7/8)    :";
		file("File_update_8");
		cout<<"Installing update(8/8)    :";
		file("File_update_9");
		cout<<"Installed the updates! write the cp list update to see the list of updates !";
		string update;
		cin>>update;
		if (update == "cp list update") {
			cout<<File_update_1<<endl;
			cout<<File_update_2<<endl;
			cout<<File_update_3<<endl;
			cout<<File_update_4<<endl;
			cout<<File_update_5<<endl;
			cout<<File_update_6<<endl;
			cout<<File_update_7<<endl;
			cout<<File_update_8<<endl;
			cout<<File_update_9<<endl;
			cout<<"This is all of files whos installed!";
		} 
	}
	if (command == "cp remove") {
		cout<<"Choice the app to remove   :";
		string del;
		cin>>del;
		if (del == "nvim") {
			delete(neovim);
		}
		if (del == "firefox") {
			delete(firefox);
		}
	}
}
