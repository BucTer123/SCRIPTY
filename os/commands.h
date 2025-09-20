#pragma once
#include <string>
#include "user.h"
#include "filesystem.h"

bool processCommand(const string& cmd, User& user, FileSystem& fs);