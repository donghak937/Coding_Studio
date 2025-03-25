import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J021();
   }

   void J021(){
      int height, weight;
      double bmi;
      int people = 0;
      int count;

      Scanner sc = new Scanner(System.in);

      count = sc.nextInt();

      for (int i = 0; i < count; i++){

        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight / ((height * 0.01) * (height * 0.01));

        if (bmi >= 25) people++;
        else continue;
      }

      System.out.println(people);

      sc.close();
    
      
      

   }

}