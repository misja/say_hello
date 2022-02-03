import java.util.Scanner;
import java.util.ArrayList;

/**
 * Ask and remember a user's name and say hello

 Run as:

javac interactive.java
java interactive

 */
public class interactive {

    public static void main(String[] args) {
        String value;
        boolean running = true;
        Scanner input = new Scanner(System.in);
        ArrayList<String> names = new ArrayList<>();

        while (running) {
            System.out.print("Your name: ");
            value = input.nextLine();

            if (value.equals("exit")) {
                running = false;
                System.out.println("Bye!");
            } else if (names.contains(value)) {
                System.out.println(String.format("Hello %s, we have met before :)", value));
            } else {
                names.add(value);
                System.out.println(String.format("Hi %s!", value));
            }
        }
    }
}
