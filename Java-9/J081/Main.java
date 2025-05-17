import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J081();
    }

    void J081() {

        int a[];
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        Scanner input = null;
        try {
            input = new Scanner(new File("data.txt"));
            String line = input.nextLine();
            String[] b = (line.split(" "));
            for (String s : b) {
                int num = Integer.parseInt(s);
                if (num > max){
                    max = num;
                }
                if (num < min){
                    min = num;
                }
            }

        } catch (FileNotFoundException e) {
            System.out.println("File not Found");
            System.exit(0);
        }

        System.out.printf("Maximum number : %d\n", max);
        System.out.printf("Minimum number : %d\n", min);

    }

}