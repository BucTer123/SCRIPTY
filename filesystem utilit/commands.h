#pragma once
#include <string>
using namespace std;

void cmd_ls();
void cmd_cd(const string& name);
void cmd_mkdir(const string name);
void cmd_touch(const string name);
void cmd_rm(const string name);
void cmd_rmdir(const string name);
