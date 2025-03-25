import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J026();
    }

    void J026(){
        int size;
        int numbers;
        int max_num = 0, min_num = 100;
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        for(int i = 0; i < size; i++){
            numbers = sc.nextInt();
            if (numbers > max_num) max_num = numbers;
            else if (numbers < min_num) min_num = numbers;
        }
        System.out.printf("가장 큰 수  %d\n", max_num);
        System.out.printf("가장 작은 수  %d\n", min_num);
        sc.close(); 

    }

}