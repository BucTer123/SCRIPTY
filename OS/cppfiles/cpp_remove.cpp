#include <iostream>
#include <filesystem>
#include <string>
using namespace std;
using namespace filesystem;

void removew() {
    cout<<"Write the name app to delete BUT you can delete only 3 apps! you can write 'help_remove' to see the apps who you can delete!\n";
    string removew;
    cin>>removew;
    if (removew == "neovim") {
        remove_all("nvim");
    }
    if (removew == "help_remove") {
        cout<<"The list of apps who you can delete!";
        cout<<"1  = firefox\n";
        cout<<"2  = neovim\n";
        cout<<"3  = tor\n";
    }
    if (removew == "firefox") {
        remove_all("firefox");
    }
    if (removew == "tor") {
        remove_all("tor");
    }
}