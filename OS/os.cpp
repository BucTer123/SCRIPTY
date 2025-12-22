/*
 F
 U
 C
 K

 Y
 O
 U
 !
 */
// Библиотеки / Modules
#include <iostream>
#include <string>
#include <vector>
#include <curl/curl.h>
#include <filesystem>
#include <fstream>
#include "headerfiles/about_author.h"
#include "headerfiles/exit.h"
#include "headerfiles/cpp_install.h"
#include "headerfiles/cpp_update.h"
#include "headerfiles/cpp_remove.h"
#include "headerfiles/sudo_cpp_install.h"
#include "headerfiles/sudo_cpp_update.h"
#include "headerfiles/sudo_cpp_remove.h"
#include "headerfiles/start_note.h"
#include "headerfiles/calc.h"
#include "ASL/ASL_H/ASL_BASE_TEXT.h"
#include "ASL/ASL_H/ASL_VER.h"
#include "ASL/ASL_H/ASL_HELP.h"
#include "ASL/ASL_H/ASL_CODE.h"
using namespace std;
using namespace filesystem;

int main() {
 //Самое начало /beggint
 cout<<"Welcome to the MyOS! \n";
 string command;
 int  pazz;
 string uzr;
 cout<<"Write the command or write 'help'   :\n";
 cin>>command;
 //Помощь / help
 if (command == "help") {
  cout<<"The list of commands:\n";
  cout<<"   1 = exit\n";
  cout<<"   2 = help\n";
  cout<<"   3 = cpp install \n";
  cout<<"   4 = cpp update  \n";
  cout<<"   5 = cpp remove          \n";
  cout<<"   6 = cpp open  \n";
  cout<<"   7 = cd          \n";
  cout<<"   8 = ls      \n";
  cout<<"   9 = reboot  \n";
  cout<<"  10 = mkdir  \n";
  cout<<"  11 = rmdir  \n";
  cout<<"  12 = rm -rf \n";
  cout<<"  13 = cf <----create file\n";
  cout<<"  14 = sudo cpp install \n";
  cout<<"  15 = sudo cpp update  \n";
  cout<<"  16 = sudo cpp remove  \n";
  cout<<"  17 = create_user      \n";
  cout<<"  18 = create_password  \n";
  cout<<"  19 = nyafetch_start   \n";
  cout<<"  20 = time_now         \n";
  cout<<"  21 = start_calculator  \n";
  cout<<"  22 = start_porno       \n";
  cout<<"  23 = start_note        \n";
  cout<<"  24 = about_author      \n";
  cout<<"  25 = ASL <--(Author Shell Language)\n";
  cout<<"  26 = ASL --version <--- version ASL\n";
  cout<<"  27 = ASL --help <--- help about ASL\n";
  cout<<"  28 = ASL --write <--- write script in ASL\n";
 }
 //Виход / Exit
 if (command == "exit") {
  exit();
 }
 //Скачивание програм / Installing programs
 if (command == "cpp install") {
  install();
 }
 //Обновление системи(Сделано фейково но логично) / Updating system (This is fake but proud)
 if (command == "cpp update") {
  update();
 }
 //Удаление програм / Uninstalling Programs
 if (command == "cpp remove") {
  removew();
 }
 //Команди для работи с дисками и путями / Commands for work with disk and directories
 if (command == "cd{path}") {
  cout<<"~/{path} :| \n";
 }
 if (command == "ls{path}") {
  cout<<"{path}";
 }
 //Ребут/Reboot
 if (command == "reboot") {
  cout<<"Reboot....";
  return 0;
 }
 //Создание удаление директории или файлов / Creating or deleting the directories or files
 if (command == "mkdir") {
  cout<<"Write the name of dir to create  :";
  string file_create;
  cin>>file_create;
  create_directory(file_create);
 }
 if (command == "rmdir") {
  cout<<"Write the name of dir to delete   :";
  string file_delete;
  cin>>file_delete;
  remove_all(file_delete);
 }
 if (command == "rm -rf") {
  cout<<"Write the name of file to delete   :";
  string dir_delete;
  remove(dir_delete);
 }
 if (command == "cf") {
  cout<<"Write the name of file to create   :";
  string dir;
  cin>>dir;
  ofstream("dir");
 }
 //Скачивание програми с режима администратора / Downloading program with regime of admin
 if (command == "sudo cpp install") {
  sudoinstall();
 }
 //Обновление от режимa админа/Updating from admin
 if (command == "sudo cpp update") {
  sudoupdate();
 }
 //Удаление с правами админа/Deleting with admin
 if (command == "sudo cpp remove") {
  sudoremove();
 }
 //Создание пользователя/Creating user
 if (command == "create_user") {
  cout<<"Write the name to create user    :";
  string usr;
  cin>>usr;
  create_directory(usr);
  uzr = usr ;
 }
 //Создание пароля/Creating password
 if (command == "create_password") {
  cout<<"Write the password BUT ONLY WITH NUMBERS! ";
  int pass;
  cin>>pass;
  create_directory("pass");
  pazz = pass;
 }
 //Nyafetch(Жалкая пародия на neofetch) / Nyafetch(stupid parody in neofetch LOL)
 if (command == "nyafetch_start") {
  cout<<"NYAFETCH ------------\n";
  cout<<"VERSION-1.0 ++++++++++++\n";
  cout<<"OS: MyOS____________________\n";
  cout<<"Kernel:Not found__________________\n";
  cout<<"^-^\n";
  cout<<"Installed app: Firefox, TorBrowser, Neovim, Vim\n";
  cout<<"Password"<<pazz<<endl;
  cout<<"Username"<<uzr<<endl;
  // ДРУГИХ ЯЗИКОВ НА УДИВЛЕНИЕ НЕТ БЛЯТЬ!
  cout<<"Lang = en\n";
  cout<<"Username:  {uzr}"<<endl;
  cout<<"NYAAAAAAAAAAAAAA ^-^ \n"; //<---- ЕТО ПИЗДЕЦ! ЕТО КРИНЖ НО Я В ЕВРОПЕ НУЖНО ПИДАРАСОВ УВАЖАТЬ
  cout<<"UWU\n"; // <----- ЕЩЕ ХУЖЕ БЛЯТЬ!
 }
 //Время/Time
 if (command == "time_now") {
  time_t now = time(nullptr);
  cout<<"Time: "<<ctime(&now);
 }
 //Калькулятор/Calculator
 if (command == "start_calculator") {
  calc();
 }
 //Шутка/Joke
 if (command == "start_porno") {
  cout<<"AHAHHAHAAHAHHAHAHHAHAHHAHHAHAHAHAHA";
  return 0;
 }
 //Блокнот / Note
 if (command == "start_note") {
  startnote();
 }
 //Инфа / Info
 if (command == "about_author") {
  about_author();
 }
 if (command == "ASL") {
  ASLBASE();
 }
 if (command == "ASL --version") {
  VERASL();
 }
 if (command == "ASL --help") {
  HELPASL();
 }
 if (command == "ASL --write") {
  CODEASL();
 }
}