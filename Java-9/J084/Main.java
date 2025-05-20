import java.io.FileNotFoundException;
import java.util.ArrayList;
import java.util.Scanner;
import java.io.*;

public class Main {
    public static void main(String[] arg){
        Main pStudio = new Main();
        pStudio.J084();
    }
    void J084(){
        Scanner input = null;
        ArrayList<String> names = new ArrayList<>();
        try{
            input = new Scanner(new File("name.txt"));
            while (input.hasNextLine()) {
                String name = input.nextLine();
                names.add(name);
            }
            input.close();

        } catch (FileNotFoundException e){
            System.out.println("No File");
        }
        String max = names.get(0);
        String min = names.get(0);
        for(String a : names){
            if (a.length() > max.length()){
                max = a;
            }
            if (a.length() < min.length()){
                min = a;
            }
        }
        System.out.printf("Count : %d\n", names.size());
        System.out.println("Longest name : " + max);
        System.out.println("Shortest name : " + min);

    }
}
