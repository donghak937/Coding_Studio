import java.io.*;
import java.util.Scanner;
public class Main {
    public static void main(String[] arg){
        Main pStudio = new Main();
        pStudio.J082();
    }
    void J082(){
        File file = new File("data.txt");
        Scanner input = null;

        double bmi = 0;
        int total = 0;
        int count = 0;

        try{
            input = new Scanner(file);
            while(input.hasNextLine()){
                String a = input.nextLine();
                String b[] = a.split(" ");
                bmi = (Double.parseDouble(b[1]))  / ((Double.parseDouble(b[0]) * 0.01) * (Double.parseDouble(b[0]) * 0.01));
                if (bmi > 25) total++;
                bmi = 0;
                count++;
            }
            input.close();


        } catch(FileNotFoundException e){
            System.out.println("No file");
            System.exit(0);
        }

        System.out.printf("All %d persons.\n", total);
        System.out.printf("Total overweight persons: %d (%.0f%%)", total, ((double)total / (double)count) * 100);
    }

}
