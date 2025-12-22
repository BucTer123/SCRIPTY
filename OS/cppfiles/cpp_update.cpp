#include <iostream>
#include <filesystem>
#include <string>
using namespace std;
using namespace filesystem;

void update() {
    cout<<"Updating system.......\n";
    create_directory("Update_file\n");
    create_directory("Autoremove_file\n");
    cout<<"Update(1/8)....\n";
    create_directory("Update_file_1");
    create_directory("Autoremove_file_1");
    cout<<"Update(2/8)....\n";
    create_directory("Update_file_2");
    create_directory("Autoremove_file_2");
    cout<<"Update(3/8)....\n";
    create_directory("Update_file_3");
    create_directory("Autoremove_file_3");
    cout<<"Update(4/8)....\n";
    create_directory("Update_file_4");
    create_directory("Autoremove_file_4");
    cout<<"Update(5/8)....\n";
    create_directory("Update_file_5");
    create_directory("Autoremove_file_5");
    cout<<"Update(6/8)....\n";
    create_directory("Update_file_6");
    create_directory("Autoremove_file_6");
    cout<<"Update(7/8)....\n";
    create_directory("Update_file_7");
    create_directory("Autoremove_file_7");
    cout<<"Update(8/8)....\n";
    create_directory("Update_file_8");
    create_directory("Autoremove_file_8");
    create_directory("Final_file");
    cout<<"Finished updating system! You can write 'cp autorm' to remove the files\n";
    string autorm;
    cin>>autorm;
    //Автоудаление/Autoremove
    while (true) {
        remove("Autoremove_file");
        remove("Autoremove_file_1");
        remove("Autoremove_file_2");
        remove("Autoremove_file_3");
        remove("Autoremove_file_4");
        remove("Autoremove_file_5");
        remove("Autoremove_file_6");
        remove("Autoremove_file_7");
        remove("Autoremove_file_8");
    }
}