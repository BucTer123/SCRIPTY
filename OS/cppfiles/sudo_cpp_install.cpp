#include <iostream>
#include <fstream>
#include <curl/curl.h>
using namespace std;

void sudoinstall() {
    cout<<"Write the username\n :";
    string username;
    cin>>username;
    cout<<"Write the password\n :";
    int pass;
    cin>>pass;
    cout<<username<<pass<<endl;
    cout<<"Write the name of app to install BUT now you can tell only 3 apps! but if you dont know write 'help_paket' to see the list of apps\n";
    string paket_command;
    cin>>paket_command;
    if (paket_command == "help_paket") {
        cout<<"The list of apps  :\n";
        cout<<"  1 = neovim\n";
        cout<<"  2 = firefox\n";
        cout<<"  3 = tor\n";
        cout<<"  4 = steam\n";
        cout<<"  5 = opera\n";
        cout<<"  6 = Visual Studio Codiumm (Vscodium)\n";
    }
    if (paket_command == "neovim") {
        cout<<"Installing neovim!\n";
        CURL* neovim = curl_easy_init();

        curl_easy_setopt(neovim, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(neovim, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(neovim, CURLOPT_URL, "https://github.com/neovim/neovim.git");
        curl_easy_perform(neovim);
        curl_easy_cleanup(neovim);
    }
    if (paket_command == "firefox") {
        cout<<"Installing firefox!\n";
        CURL* firefox = curl_easy_init();

        curl_easy_setopt(firefox, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(firefox, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(firefox, CURLOPT_URL, "https://github.com/mozilla-firefox/firefox.git");
        curl_easy_perform(firefox);
        curl_easy_cleanup(firefox);
    }
    if (paket_command == "tor") {
        cout<<"Intalling tor!\n";
        CURL* tor = curl_easy_init();

        curl_easy_setopt(tor, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(tor, CURLOPT_WRITEFUNCTION,  stdout);
        curl_easy_setopt(tor, CURLOPT_URL, "https://github.com/TheTorProject/gettor.git");
        curl_easy_perform(tor);
        curl_easy_cleanup(tor);
        ofstream("tor");
    }
    if (paket_command == "steam") {
        cout<<"Installing stema!\n";
        CURL* steam = curl_easy_init();

        curl_easy_setopt(steam, CURLOPT_WRITEDATA, "write ");
        curl_easy_setopt(steam, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(steam, CURLOPT_URL, "https://github.com/ValveSoftware/steam-for-linux.git");
        curl_easy_perform(steam);
        curl_easy_cleanup(steam);
    }
    if (paket_command == "opera") {
        cout<<"Installing opera\n";
        CURL* opera = curl_easy_init();

        curl_easy_setopt(opera, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(opera, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(opera, CURLOPT_URL, "https://github.com/chromium/chromium.git");
        curl_easy_perform(opera);
        curl_easy_cleanup(opera);
    }
    if (paket_command == "Vscodium") {
        cout<<"Installing Vscodoium\n";
        CURL* vscodium = curl_easy_init();

        curl_easy_setopt(vscodium, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(vscodium, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(vscodium, CURLOPT_URL, "https://github.com/VSCodium/vscodium.git");
        curl_easy_perform(vscodium);
        curl_easy_cleanup(vscodium);
    }
}