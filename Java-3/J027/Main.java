import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J027();
    }

    void J027(){
        int[] height = new int[10];
        int[] weight = new int[10];
        double[] bmi = new double[10];
        int count = 0;
        int i;
        int size;
        Scanner sc = new Scanner(System.in);
        size = sc.nextInt();
        for(i = 0; i < size; i++){
            height[i] = sc.nextInt();
            weight[i] = sc.nextInt();
            bmi[i] = weight[i] / ((height[i] * 0.01) * (height[i] * 0.01));
        }
        System.out.printf("Overweight person - ");
        for(i = 0; i < size; i++){
            if (bmi[i] >= 25){
                count++;
                System.out.printf("%d ",i+1);
            }
        }
        System.out.printf("\ntotal - %d", count);
        sc.close(); 

    }

}