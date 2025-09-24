#include "filesystem_utils.h"
#include <filesystem>
using namespace std;

namespace fs = filesystem;

bool file_exists(const string& path) {
    return fs::exists(path) && fs::is_regular_file(path);
}

bool dir_exists(const string& path) {
    return fs::exists(path) && fs::is_directory(path);
}