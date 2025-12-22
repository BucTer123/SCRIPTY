<?php
mkdir("/root");
mkdir("/root/kernel");
mkdir("/home/Downloads");
mkdir("/home/Pictures");
mkdir("/home/Documents");
echo"Welcome to the pseudo os!\n";
echo"Write the command or write 'help_pseudo'       :";
$command = trim(fgets(STDIN));

if ($command == "help_pseudo") {
    echo"       1 => help_pseudo\n";
    echo"       2 => shutdown\n";
    echo"       3 => mkdir\n";
    echo"       4 => rmdir\n";
}
if ($command == "shutdown") {
    echo"Shutdown.....\n";
    return 0;
}
if ($command == "mkdir") {
    echo"Write the name of file to create   :\n";
    $create = trim(fgets(STDIN));
    mkdir($create);
}
if ($command == "rmdir") {
    echo"Write the name of file to delete   :\n";
    $delete = trim(fgets(STDIN));
    rmdir($delete);
}
?>