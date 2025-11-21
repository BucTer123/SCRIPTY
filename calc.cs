using System;
class System {
    public static void System() {
        float a;
        float b;
        float c;
        float d;
        string name = command;
        Console.WriteLine("Welcome!\n");
        Console.WriteLine("Write first number :");
        Console.ReadLine(a);
        Console.WriteLine("Write second number :");
        Console.ReadLine(b);
        Console.WriteLine("Write third number : ");
        Console.ReadLine(c);
        Console.WriteLine("Write fourth number : ");
        Console.ReadLine(d);
        command = C;
        Console.WriteLine("Write the command");
        Console.ReadLine(C);
        if (C == "help") {
            Console.WriteLine("+, -, *, /, exit, help, clear, version");
        }
        if (C == "exit") {
            Console.WriteLine("Shutdown....");
            return 0;
        }
        if (C == "clear") {
            Console.WriteLine("Cleared");
            return 0;
        }
        if (C == "version") {
            Console.WriteLine("I dont know <3");
        }
        if (C == "+") {
            Console.WriteLine(a + b + c + d);
        }
        if (C == "-") {
            Console.WriteLine(a - b - c - d);
        }
        if (C == "*") {
            Console.WriteLine(a * b * c * d);
        }
        if (C == "/") {
            if (a == 0) {
                Console.WriteLine("ERROR!");
            } else {
                Console.WriteLine(a / b / c / d);
            }
            if (b == 0) {
                Console.WriteLine("ERROR!");
            } else {
                Console.WriteLine(a / b / c / d);
            }
            if (c == 0) {
                Console.WriteLine("ERROR!");
            } else {
                Console.WriteLine(a / b / c / d);
            }
            if (d == 0) {
                Console.WriteLine("ERROR!");
            } else {
                Console.WriteLine(a / b / c / d);
            }
        }
    }
}