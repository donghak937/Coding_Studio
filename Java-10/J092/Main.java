package J092;

import java.util.Scanner;

public class Main {
    public static void main(String[] arg){
        Main pStudio = new Main();
        pStudio.J092();
    }

    void J092(){
        Scanner sc = new Scanner(System.in);

        ParkingManager manager = new ParkingManager();
        int input;
        while(true){
            System.out.print("1) enter, 2) exit, 3) list, 4) quit > ");
            input = sc.nextInt();

            switch (input) {
                case 1:
                    manager.park();
                    break;
                case 2:
                    manager.exitCar();
                    break;
                case 3:
                    manager.printSub();
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
