import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J023();
    }

    void J023(){
        int num, total = 0;
        double average = 0;
        int size;
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        for(int i = 0; i < size; i++){
            num = sc.nextInt();
            total += num;
        }

        average = (1.0 * total) / (size * 1.0);
        System.out.printf("%d %.1f",total, average);
        sc.close(); 


    }

}