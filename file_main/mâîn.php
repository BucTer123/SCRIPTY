<?php
echo"           Welcome!        \n";
echo"          Write the command or write 'help'   :\n";
$command = trim(fgets(STDIN));
if ($command == 'help') {
    echo"           Welcome to the list of commands             \n";
    echo"           1   =   help                \n";
    echo"           2   =   exit                \n";
    echo"           3   =   servers             \n";
    echo"           4   =   add_server          \n";
    echo"           5   =   delete_server       \n";
}
if ($command == "exit" ) {
    echo"           Shutdown.........            \n";
    exit(0);
}
if ($command == "servers" ) {
    echo"           1   =   Server_1\n";
    echo"           2   =   Server_2\n";
    echo"           3   =   Server_3\n";
    echo"           4   =   Server_4\n";
    echo"           5   =   Server_5\n";
    echo"           6   =   Server_6\n";
    echo"           7   =   Server_7\n";
    echo"           8   =   Server_8\n";
    echo"           9   =   Server_9\n";
    echo"           10   =   Server_10\n";
    echo"           11   =   Server_11\n";
    echo"           12   =   Server_12\n";
    echo"           13   =   Server_13\n";
    echo"           14   =   Server_14\n";
    echo"           15   =   Server_15\n";
    echo"           16   =   Server_16\n";
    echo"           17   =   Server_17\n";
    echo"           18   =   Server_18\n";
    echo"           19   =   Server_19\n";
    echo"           20   =   Server_20\n";
}
if ($command == "add_server" ) {
    echo"           Add server:        \n";
    $add_server = trim(fgets(STDIN));
    echo"           Created new server  {$add_server}\n";
}
if ($command == "delete_server" ) {
    echo"           Delete server:        \n";
    $delete_server = trim(fgets(STDIN));
    echo"           Created new server  {$delete_server}\n";
}
?>
