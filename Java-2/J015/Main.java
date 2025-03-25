import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J015();
      
   }

   void J015(){
      int num1, num2, num3;
      int max_num, min_num;
      Scanner sc = new Scanner(System.in);

      num1 = sc.nextInt();
      num2 = sc.nextInt();
      num3 = sc.nextInt();
      
      if (num1 >= num2 && num3 <= num1) {
        if (num2 >= num3) min_num = num3;
        else min_num = num2;
        max_num = num1;
      }
      else if (num2 >= num1 && num3 <= num2) {
        if (num1 >= num3) min_num = num3;
        else min_num = num1;
        max_num = num2;
      }
      else {
        if (num2 >= num1) min_num = num1;
        else min_num = num2;
        max_num = num3;
      }

      System.out.printf("%d %d",max_num, min_num);

     
   }


}