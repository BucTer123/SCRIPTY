import java.util.Scanner;

class calc {
    public static void calc() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Welcome !\n");
        float a;
        float b;
        String command;
        System.out.println("Write the first number      :\n");
        a = sc.nextFloat();
        System.out.println("Write the second number     :\n");
        b = sc.nextFloat();
        System.out.println("Write the command or write 'help'       :\n");
        command = sc.nextLine();
        if (command .equals("help")) {
            System.out.println("+, -, *, /");
        }
        if (command .equals("+")) {
            System.out.println(a + b);
        }
        if (command .equals("-")) {
            System.out.println(a - b);
        }
        if (command .equals("*")) {
            System.out.println(a * b);
        }
        if (command .equals("/")) {
            if (b == 0) {
                System.out.println("ERROR!");
            } else {
                System.out.println(a / b);
            }
        }
        calc();
    }
}
