import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] arg){
        Main pStudio = new Main();
        pStudio.J085();
    }
    void J085(){
        Scanner input = null;
        int lower = 0;
        int upper = 0;
        int space = 0;
        try{
            input = new Scanner(new File("data.txt"));
            while(input.hasNextLine()){
                String line = input.nextLine();
                for(int i = 0 ; i < line.length(); i++){
                    if (line.charAt(i) >= 'a' && line.charAt(i) <= 'z') lower++;
                    else if (line.charAt(i) >= 'A' && line.charAt(i) <= 'Z') upper++;
                    else if (line.charAt(i) == ' ') space++;
                }
            }
            input.close();
        } catch (FileNotFoundException e){
            System.out.println("no File");
        }
        System.out.println("A~Z - " + upper);
        System.out.println("a~z - " + lower);
        System.out.println("Space - " + space);
    }
}
