import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J011();
   }

   void J011(){
      int height, weight;
      double bmi;

      Scanner sc = new Scanner(System.in);

      height = sc.nextInt();
      weight = sc.nextInt();

      bmi = weight / ((height * 0.01) * (height * 0.01));

      if (bmi >= 25){
        System.out.println("Yes");
      }
      else{
        System.out.println("No");
      }
   }

}