package J091;

import java.util.Scanner;

public class Main {
    public static void main(String[] arg){
        Main pStudio = new Main();
        pStudio.J091();
    }
    void J091(){
        Scanner sc = new Scanner(System.in);

        ScoreManager manager = new ScoreManager();
        manager.loadData();
        int input;
        while(true){
            System.out.print("1.Print Stat | 2.Search | 3.Edit | 4.Exit >> ");
            input = sc.nextInt();

            switch (input) {
                case 1:
                    manager.printSub();
                    break;
                case 2:
                    manager.search();
                    break;
                case 3:
                    manager.edit();
                    break;
                case 4:
                    System.out.println("Bye");
                    return;
                default:
                    break;
            }
        }
        
        
    }
}
