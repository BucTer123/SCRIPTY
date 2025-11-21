<?php
    $a = "a";
    $b = "b";
    $c = "c";
    $d = "d";
    $command = "Command";
    echo"Welcome!\n";
    echo"Write first number: \n";
    $a = trim(fgets(STDIN));
    echo"Write second number: \n";
    $b = trim(fgets(STDIN));
    echo"Write third number: \n";
    $c = trim(fgets(STDIN));
    echo"Write fourth number: \n";
    $d = trim(fgets(STDIN));
    echo"Write command: ";
    $command = trim(fgets(STDIN));
    if ($command == "help") {
        echo"+, -, *, /, exit, clear, version. help";
    }
    if ($command == "exit") {
        echo"Shutdown....";
        return 0;
    }
    if ($command == "clear") {
        echo"Cleared";
        return 0;
    }
    if ($command == "verison") {
        echo"I dont know";
    }
    if ($command == "+") {
        echo $a + $b + $c + $d;
    }
    if ($command == "-") {
        echo $a - $b - $c - $d;
    }
    if ($command == "*") {
        echo $a * $b * $d *$d;
    }
    if ($command == "/") {
        if (b == 0) {
            echo"ERROR";
        } else {
            echo $a / $b;
        }
    }
?>
