#include <iostream>
#include <thread>
#include <core>
#include <sys/stat.h>
#include <string>
#include <sys>
#include <FL/Fl.h>
#include <Fl_Window.h>
#include <Fl_Input.h>
#include <Fl_Output.h>
#include <Fl_Button.h>
#include <string>
#include <filesystem>
#include <fstream>
#include <cmath>
#include <ctime>
#include <vector>
#include <curl/curl.h>
using namespace std;
using namespace filesystem;

void sys_private() {
    private:
            thread* a = new thread(2);
            core* b = new core(2);
            create_direction("~/");
            create_direction("~/home");
            create_direction("~/Photos");
            create_direction("~/Downloads");
            create_direction("~/Trash");
            ofstream("file.txt");
            ofstream("file.nyapkg");
            char[90] R = new char();
            char[10000] z = new char();
            char[1290] o = new char();
            char[1300] v = new char();
            char[19000] p = new char();
}
void sys() {
    cout<<"         Welcome to the system!          \n";
    cout<<"         Write the username              :\n";
    string username;
    cin>>username;
    cout<<"         Write the password              :\n";
    float password;
    cin>>password;
    string command;
    cout<<"         Write the command or write 'help-term'      :       \n";
    cin>>command;
}
void help_term() {
    cout<<"         The list of commands        :       \n";
    cout<<"         1 = help                            \n";
    cout<<"         2 = exit                            \n";
    cout<<"         3 = time-now                        \n":
    cout<<"         4 = send-req                        \n":
    cout<<"         5 = start-GUI                       \n";
    cout<<"         6 = download                        \n";
    cout<<"         7 = update      `                   \n";
    cout<<"         8 = removeapp                       \n";
    cout<<"         9 = mkdir                           \n";
    cout<<"         10 = rmdir                          \n";
    cout<<"         11 = rm -rf                         \n";
    cout<<"         12 = mkdir -f                       \n";
    cout<<"         13 = cppfetch                       \n";
    cout<<"         14 = note-term                      \n";
    cout<<"         15 = note-GUI                       \n";
    cout<<"         16 = shutdown                       \n";
}
void exit_term() {
    cout<<"         Shutdown system....         \n";
    cout<<"         Shutdown files.....         \n";
    cout<<"         Turn off Ram...             \n";
    return 0;
}
void time_now() {
    time_t result =  new time(nullptr);
}
void send_req() {
    cout<<"         Write the domine to site to send request from the site        :   \n";
    string sd;
    cin>>sd;

    CURL* curl = curl_easy_init();

    curl_easy_setopt(curl, SEROPT_WRITEDATA, "write");
    curl_easy_setopt(curl, SETOPT_WRITEFUNCTION, stdout);
    curl_easy_setopt(curl, SETOPT_URL, sd);

    curl_easy_cleanup(curl);
}
void start_GUI() {
    void frinput(Fl_Widget* w, void* data) {
        Fl_Input input_command = (Fl_Input*)data;
        input_command("Commands:  text");
    }

    void ftButton(Fl_Widget* w, void* data) {
        Fl_Output txt = (Fl_Input*)data;
        txt("HUI!");
    }

    Fl_Window* frwin = new Fl_Window(1920, 1080, "GUI-Terminal");

    Fl_Output* frtext = new Fl_Output(100, 50, 25, 50, "Welcome to the terminal GUI!");

    Fl_Input* fiinput = new Fl_Input(100, 50, 25, 50, "Write the command or write 'help-term-gui'       :");

    Fl_Button ftButton = new Fl_Button(100, 50, 25, 50, "Click to see the text");

    fiinput->callback(frinput, input);
    ftButton->callback(ftButton, output);

    frwin->show();
    frwin->end();
}
void download() {
    cout<<"         Welcome to install util!            \n";
    string down;
    cout<<"         Write the name of app to install or write 'list-down' to see the download list of apps          :\n";
    cin>>down;
    if (down == "list-down") {
        cout<<"         The list of apps to download        \n";
        cout<<"         1 -> firefox\n";
        cout<<"         2 -> steam  \n";
    }
    if (down == "firefox") {
        cout<<"         You choise the firerox!         \n";
        cout<<"         Installing firefox!             \n";
        CURL* firefox = curl_easy_init();

        curl_easy_setopt(firefox, SETOPT_WRITEDATA, "write");
        curl_easy_setopt(firefox, SETOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(firefox, SETOPT_URL, "https://github.com/mozilla-firefox/firefox.git");

        curl_easy_perform(firefox);
        curl_easy_cleanup(firefox);
    }
    if (down == "steam") {
        cout<<"         You choice the steam!           \n";
        cout<<"         Installing steam!               \n";
        CURL* steam = curl_easy_init();

        curl_easy_setopt(steam, SETOPT_WRITEDATA, "write");
        curl_easy_setopt(steam, SETOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(steam, SETOPT_URL, "https://store.steampowered.com/about/");
        
        curl_easy_perform(steam);
        curl_easy_cleanup(steam);

    }
}
void update() {
    cout<<"         Hi!         \n";
    cout<<"         Updating system         \n";

    CURL* update = curl_easy_init();

    curl_easy_setopt(update, CURLOPT_WRITEDATA, "write");
    curl_easy_setopt(update, CURLOPT_WRITEFUNCTION, stdout);
    curl_easy_setopt(update, CURLOPT_URL, "https://github.com/BucTer123/cpp_1.git");

    curl_easy_perform(update);
    update_1();
    update_2();
    update_3();
    update_4();
    curl_easy_cleanup(update);
}
void removeapp() {
    cout<<"         Welcome to remove util!         \n";
    cout<<"         Write the name of app to delete or write 'removeapp-list' to see the list of apps to remove         :\n"
    string removeapp;
    cin>>removeapp
    if (removeapp == "removeapp-list") {
        cout<<"         This is list of apps to remove      :\n";
        cout<<"         1 -> firefox        \n";
        cout<<"         2 -> steam          \n";
    }
    if (removeapp == "firefox") {
        remove_all("firefox");
    }
    if (removeapp == "steam") {
        remove_all("steam");
    }
}

void mkdir_pp() {
    cout<<"         Welcome to mkdir util!          \n";
    cout<<"         Write the name of dir to create!        :\n";
    string mkdirl;
    cin>>mkdirl;
    create_directory(mkdirl);
    cout<<"Created"<<mkdirl<<"!\n"<<endl;
}
void rmdir_pp() {
    cout<<"         Welcome to rmdir util!          \n";
    cout<<"         Write the name of dir to delete!            :\n";
    string rmdirl;
    cin>>rmdirl;
    remove_all(rmdirl);
    cout<<"Removed      "<<rmdirl<<"!\n"<<endl; 
}
void rmminusrf_pp() {
    cout<<"         Welcome to rm -rf util!         \n";
    cout<<"         Write the name of file to delete!           \n":
    string rmrfl;
    cin>>rmrfl;
    ifstream(rmrfl);
    cout<<"Removed      "<<rmrfl<<"!\n"<<endl;
}
void mkdirminusf_pp() {
    cout<<"         Welcome to mkdir -p util!           \n";
    cout<<"         Write the name of file to create!           \n";
    string mkdirfl;
    cin>>mkdirfl;
    ofstream(mkdirfl);
    cout<<"Created      "<<mkdirfl<<"!\n"<<endl;
}
void cppfetch() {
    cout<<"         Welcome to cppfetch!        "<<endl;
    cout<<"         Os:CPPOs                    "<<endl;
    cout<<"         Kernel: Nope                "<<endl;
    cout<<"         User = "<<username<<"       "<<endl;
    cout<<"         Password = "<<password<<"   "<<endl;
    cout<<"-------------------------------------------\n";
    cout<<"+++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"___________________________________________\n";
    cout<<"...........................................\n":
    cout<<"'''''''''''''''''''''''''''''''''''''''''''\n";
    cout<<"```````````````````````````````````````````\n";
    cout<<"`~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"===========================================\n";
    cout<<"|||||||||||||||||||||||||||||||||||||||||||\n";
    cout<<"///////////////////////////////////////////\n";
    cout<<"{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{{\n";
    cout<<"}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}]}}\n";
    cout<<"[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[[\n";
    cout<<"]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]]\n";
    cout<<"*******************************************\n";
    cout<<"!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";
    cout<<"@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
    cout<<"###########################################\n";
    cout<<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
    cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout<<"&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&\n";
    cout<<"(((((((((((((((((((((((((((((((((((((((((((\n";
    cout<<")))))))))))))))))))))))))))))))))))))))))))\n";
}
void note_term() {
    cout<<"Welcome!";
    vector<string> lines;
    for (int i = 0; i<1000000; i++) {
        getline(cin, 100000000);
    }
}
void GUI_note() {
    void scButton(Fl_Widget*, void* data) {
        Fl_Output sex = (Fl_Output*)data;
        sex->("Leave.....");
        scwin->show();
        scwin->end();
        exit(0);
    }
    void thrButton(Fl_Widget*, void* data) {
        Fl_Input voz = (Fl_Input*)data;
        for (int j = 0; j<1000000000000000; i++) {
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
            voz->("");
        }
    }
    Fl_Window* scwin = new Fl_Window(1920, 1080, "Terminal");

    Fl_Output* sctext = new Fl_Output(100, 50, 25, 50, "Welcome to note!");

    Fl_Output* thtext = new Fl_Output(60, 40, 50, 30, "Click in the button to start");

    Fl_Button* scButton = new Fl_Button(50, 40, 50, 30, "Leave");

    Fl_Button* thrButton = new Fl_Button(50, 40, 50, 30, "start");

    scButton->callback(sex, output);
    thrButton->callback(voz, input);

    scwin->show();
    scwin->end();
}
void shutdownsys() {
    cout<<"Shutdown......";
    delete a;
    delete b;
    delete R;
    delete z;
    delete o;
    delete v;
    delete p;
    exit(0);
}

int main() {
    sys();
    if (command == "help-term") {
        help_term();
    }
    if (command == "exit") {
        exit_term();
    }
    if (command == "time-now") {
        time_now();
    }
    if (command == "send-req") {
        send_req();
    }
    if (command == "start-GUI") {
        start_GUI();
    }
    if (command == "download") {
        download();
    }
    if (command == "update") {
        update();
    }
    if (command == "removeapp") {
        removeapp();
    }
    if (command == "mkdir") {
        mkdir_pp();
    }
    if (command == "rmdir") {
        rmdir_pp();
    }
    if (command == "rm -rf") {
        rmminusrf_pp();
    }
    if (command == "mkdir -f") {
        mkdirminusf_pp();
    }
    if (command == "cppfetch") {
        cppfetch();
    }
    if (command == "term-note") {
        term_note();
    }
    if (command == "note-GUI") {
        GUI_note();
    }
    if (command == "shutdown") {
        shutdownsys();
    }
}