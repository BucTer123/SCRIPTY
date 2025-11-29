<?php
echo"Welcome to the server!\n";
$command = "command";
echo"Write the command or write help :";
$command = trim(fgets(STDIN));
if ($command === "help") {
    echo"Welcome to the help menu!\n";
    echo"In this menu you can see the list of commands for this server! \n";
    echo"1      start_work      this command starting do a work for name who you chose!\n";
    echo"2      stop_work       this command stop do a work for name who you chose!\n";
    echo"3      list_work       this command show you list of works in servers!\n";
    echo"4      add_server or add_serv      this command add server to list but this is not normal work this is for 5-10 minute work \n";
    echo"5      delete_server or del_serv      this command delete server to list but this is not normal work this is for 5-10 minute work \n";
    echo"6      exit_server     this command leave user from server\n";
    echo"7      shutdown        this command turn off this program \n";
    echo"8      help            this command help to know about commands \n";
}
if ($command === "start_work") {
    $start_work = "choice ";
    echo"Welcome !\n";
    echo"Write the name for work";
    $start_work = trim(fgets(STDIN));
    echo"Created" + $start_work;
}
if ($command === "stop_work") {
    $stop_work = "choice ";
    echo"Welcome! \n";
    echo"Write the name for stop work";
    $stop_work = trim(fgets(STDIN));
    echo"Deleted" + $stop_work;
}
if ($command === "list_work") {
    $list_work = "choice ";
    echo"Welcome!\n";
    echo"You have 4 servers!\n";
    echo"Choice the server!";
    $list_work = trim(fgets(STDIN));
    if ($list_work === "server_1") {
        echo"Work_1\n";
        echo"Work_2";
    }
    if ($list_work == "server_2") {
        echo"Work_1\n";
        echo"Work_2\n";
        echo"Work_3\n";
        echo"Work_4";
    }
    if ($list_work == "server_3") {
        echo"Work_1\n";
        echo"Work_2";
    }
    if ($list_work == "server_4") {
        echo"Work_1\n";
        echo"Work_2\n";
        echo"Work_3\n";
        echo"Work_4";
    }

}
if ($command == "add_server" or "add_serv" ) {
    $add = "add";
    echo"Welcome\n";
    echo"Write the name to add the server!";
    $add = trim(fgets(STDIN));
}
if ($command == "delete_server" or "del_serv") {
    $del = "del";
    echo"Welcome\n";
    echo"Write the name to delete the server!";
    $del = trim(fgets(STDIN));
}
if ($command == "exit_server") {
    echo"Shutdown.....";
    return 0;
}
if ($command == "shutdown") {
    echo"Shutdown.....";
    return 0;
}
?>
