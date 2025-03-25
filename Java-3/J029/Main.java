import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J029();
    }

    void J029(){

        int[] number = new int[10];
        int count = 0;
        Scanner sc = new Scanner(System.in);

        while (count != 10){
            System.out.printf("Enter #%d number > ", count+1);
            number[count] = sc.nextInt();
            for (int i = 0; i < count; i++){
                if (number[count] == number[i]){
                    System.out.printf("Duplicated! Retry.\n");
                    count--;
                }
            }
            count++;
        }
        System.out.printf("Numbers - ");
        for(int i = 0; i < 10; i++){
            System.out.printf("%d ",number[i]);
        }
        sc.close(); 
    }

}