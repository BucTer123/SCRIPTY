#include <iostream>
#include <curl/curl.h>
using namespace std;

int main() {
    cout<<"Welcome!";
    CURL* curl = curl_easy_init();
    for (int i =  0; i<1000000000; i++) {
        if (curl) {
            curl_easy_setopt(curl, CURLOPT_URL, "https://pornhub.com");
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, "write");
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, stdout);
        }
    }
    curl_easy_cleanup(curl);
}