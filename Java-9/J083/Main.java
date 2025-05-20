import java.io.*;
import java.util.Scanner;
public class Main {
    public static void main(String[] arg){
        Main pStdio = new Main();
        pStdio.J083();
    }
    void J083(){
        Scanner input = null;
        ScoreManager manager = new ScoreManager();
        try{
            input = new Scanner(new File("data.txt"));
            while(input.hasNextLine()){   
                String name = input.next();
                int kor = input.nextInt();
                int eng = input.nextInt();
                int mat = input.nextInt();
                manager.addScore(new Score(name, kor, eng, mat));
            }
            input.close();
        } catch (FileNotFoundException e){
            System.out.println("No file found");
        }
        manager.printSub();
        manager.printStudent();
        System.out.println(manager.highStudent());


    }
}
