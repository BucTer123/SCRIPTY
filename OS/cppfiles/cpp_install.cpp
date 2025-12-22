#include <iostream>
#include <filesystem>
#include <string>
#include <curl/curl.h>
using namespace std;
using namespace filesystem;

void install() {

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
        cout<<"  6 = Visual Studio Codium(Vscodium) \n";
        cout<<"  7 = VLC media player (VLC)\n";
    }
    if (paket_command == "neovim") {
        cout<<"Installing neovim!\n";
        CURL* neovim = curl_easy_init();

        curl_easy_setopt(neovim, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(neovim, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(neovim, CURLOPT_URL, "https://github.com/neovim/neovim.git");
        create_directory("nevim");
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
        cout<<"Italling tor!\n";
        CURL* tor = curl_easy_init();

        curl_easy_setopt(tor, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(tor, CURLOPT_WRITEFUNCTION,  stdout);
        curl_easy_setopt(tor, CURLOPT_URL, "https://github.com/TheTorProject/gettor.git");
        curl_easy_perform(tor);
        curl_easy_cleanup(tor);
    }
    if (paket_command == "steam") {
        CURL* steam = curl_easy_init();

        curl_easy_setopt(steam, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(steam, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(steam, CURLOPT_URL, "https://github.com/BeyondDimension/SteamTools.git");
        curl_easy_perform(steam);
        curl_easy_cleanup(steam);
    }
    if (paket_command == "opera") {
        CURL* opera = curl_easy_init();
        curl_easy_setopt(opera, CURLOPT_WRITEDATA, "write");
        curl_easy_setopt(opera, CURLOPT_WRITEFUNCTION, stdout);
        curl_easy_setopt(opera, CURLOPT_URL, "");
    }
}