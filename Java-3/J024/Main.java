import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J024();
    }

    void J024(){
        int numbers[] = new int[10];
        int first = 0, second = 0;
        int secondMaxIndex = 0;
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 10; i++){
            numbers[i] = sc.nextInt();
        }

        for (int i = 0; i < 10; i++) {
            if (numbers[i] > numbers[first]) {
                second = numbers[first];
                secondMaxIndex = first;
                first = i;
            }
            else if (numbers[i] < first && numbers[i] > second) {
                second = numbers[i];
                secondMaxIndex = i;
            }
        }

        System.out.printf("[%d] %d",secondMaxIndex + 1, second);
        sc.close(); 


    }

}