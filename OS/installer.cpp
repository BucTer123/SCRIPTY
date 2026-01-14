#include <iostream>
#include <string>
#include <filesystem>
#include <curl/curl.h>
#include <thread>
#include <ctime>
#include <fstream>
#include <sys/socket.h>

using namespace std;
using namespace filesystem;
using namespace curr;

void private_sys() {
    char* A = new char(100000000);
    char* B = new char(100000000);
    char* C = new char(100000000);
    char* D = new char(100000000);
    int sock = socket(AF_INET, SOCK_STREAM, 0);
    _aadd-i64;
    _aadd-i32;
    _THREAD_;
}

int main() {
    cout << " ### Welcome to system ! ###\n";
    cout << "> ";
    string cmd;
    cin>>cmd;
    if (cmd == "HELP") {
        cout << " ### List of commands ### \n";
        cout << " ### 1 => HELP\n";
        cout << " ### 2 => EXIT\n";
        cout << " ### 3 => MKDIR & RMDIR\n";
        cout << " ### 4 => NOW_TIME\n";
        cout << " ### 5 => MYOSINSTALLER\n";
        cout << " ### 6 => INSTALL_CPPFETCH\n";
        cout << " ### 7 => PING\n";
    }
    if (cmd == "EXIT") {
        extern "C" void leave() {
            u8int_t* endtext = "Shutdown......\n";
            asm (
                "mov ah, 0x0\n";
                "mov al, 0x0\n";
                "mov rdi, 0x0\n";
            )
        }
    }
    if (cmd == "MKDIR") {
        cout << "### Write the name to create file :";
        string mk;
        create_directory(mk);
        cout << "### Created "<<mk<<" !"<<endl;
    }
    if (cmd == "RMDIR") {
        cout << "### Write the name to remove file :";
        string rm;
        create_directory(rm);
        cout << "### Removed "<<rm<<" !"<<endl;
    }
    if (cmd == "NOW_TIME") {
        time_t now = time nullptr;
    }
    if (cmd == "MYOSINSTALLER") {
        cout << "### Welcome to MyOs installer! ###\n";
        cout << "> ";
        string line;
        if (line == "LANG_ENG") {
            cout << "### You choice English! ###!\n";
            cout << "> ";
            string eng;
            if (eng == "INSTALL_TERM-OS") {
                cout << "### Installing terminal version of MyOs!\n";
                cout << "### Removing all directories........\n";
                remove_all;
                cout << "### Creating 'root' direction \n";
                create_directory("/root");
                cout << "### Creating 'home' direction \n";
                create_directory("/root/home");
                cout << "### Creating 'Downloads' direction \n";
                create_directory("/root/home/Downloads");
                cout << "### Creating 'Documents' direction \n";
                create_directory("/root/home/Documents");
                cout << "### Creating 'Pictures' direction  \n";
                create_directory("/root/home/Pictures");
                cout << "### Creating Kernel.....\n";
                CURL* os = curl_easy_init();

                curl_easy_setopt(os, CURLOPT_WRITEDATA, "write");
                curl_easy_setopt(os, CURLOPT_WRITEFUNCTION, stdout);
                curl_easy_setopt(os, CURLOPT_URL, "");

                create_directory("/root/sys/os");
                create_directory("/root/sys/os/file.os");
                create_directory("C:");
                fstream("txt.txt");

                CURL* drivers_intel = curl_easy_init();

                curl_easy_setopt(drivers_intel, CURLOPT_WRITEDATA, "write");
                curl_easy_setopt(drivers_intel, CURLOPT_WRITEFUNCTION, stdout);
                curl_easy_setopt(drivers_intel, CURLOPT_URL, "https://intel.com");

                create_directory("/root/sys/os/drivers_intel");
                fstream("drivers.cpkg");
                curl_easy_perform(drivers_intel);
                cout << drivers_intel;
                curl_easy_cleanup(drivers_intel);

                CURL* drivers_amd = curl_easy_init();

                curl_easy_setopt(drivers_amd, CURLOPT_WRITEDATA, "write");
                curl_easy_setopt(drivers_amd, CURLOPT_WRITEFUNCTION, stdout);
                curl_easy_setopt(drivers_amd, CURLOPT_URL, "https://amd.com");

                create_directory("/root/sys/os/drivers_amd");
                fstream("drivers2.cpkg");
                curl_easy_perform(drivers_amd);
                cout << drivers_amd;
                curl_easy_cleanup(drivers_amd);

            }
            if (eng == "CREATE USER!") {
                cout << "### Write username :";
                string username;
                cout << "### Did you want password only with numbers? :";
                string pass_question;
                if (pass_question == "y") {
                    cout << "> ";
                    string password;
                }
                if (pass_question == "n") {
                    cout << "> ";
                    float password;
                }
                list_passwords = password;
            }
            if (eng == "INSTALL_CPPFETCH") {
                cout << "Updating system and Installing CPPFETCH! :\n":
                cout << "Update......\n";
                cout << "Update(1/8).....\n";
                create_directory("/root/Update");
                create_directory("/root/Update/update_file");
                cout << "Update(2/8).....\n";
                create_directory("/root/Update/update_file_2");
                cout << "Update(3/8).....\n";
                create_directory("/root/Update/update_file_3");
                cout << "Update(4/8)......\n";
                create_directory("/root/Update/update_file_4");
                cout << "Update(5/8)......\n";
                create_directory("/root/Update/update_file_5");
                cout << "Update(6/8)......\n";
                create_directory("/root/Update/update_file_6");
                cout << "Update(7/8)......\n";
                create_directory("/root/Update/update_file_7");
                cout << "Update(8/8).......\n";
                create_directory("/root/Update/update_file_8");
                cout << "SYSTEM!!!:: Updated system! \n";
                cout << "SYSTEM!!!:: Installing CPPFETCH! \n";

                CURL* fetch = curl_easy_init();

                curl_easy_setopt(fetch, CURLOPT_WRITEDATA, "write");
                curl_easy_setopt(fetch, CURLOPT_WRITEFUNCTION, stdout);
                curl_easy_setopt(fetch, CURLOPT_URL, "");

                create_directory("/root/home/apps");
                fstream("cppfetch.cpkg");
                curl_easy_perform(fetch);
                curl_easy_cleanup(fetch);
            }
        }
    }
    if (cmd == "PING") {
        CURL* ping = curl_easy_init();

        curl_easy_setopt(ping, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(ping, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(ping, CURLOPT_URL, "");

        create_directory("/root/os/pings");
        fstream("ping.cpkg");
        curl_easy_perform(ping);
        cout << ping;
        curl_easy_cleanup(ping);
    }
}