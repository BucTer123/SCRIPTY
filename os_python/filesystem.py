filesystem = {
    "root": {
        "home": {},
        "etc": {},
        "tmp"; {}
    }
}


current_path = ["root"]


def get_current_dir():
    dir_ref = filesystem
    for p in current_path:
        dir_ref = dir_ref[p]
    return dir_ref


def mkdir(name):
    dir_ref = get_current_dir()
    if name in dir_ref:
        return False
    dir_ref[name] = {}
    return True


def ls():
    dir_ref = get_current_dir()
    return list(dir_ref.keys())