import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J014();
      
   }

   void J014(){
      int income;
      double tax;
      Scanner sc = new Scanner(System.in);

      income = sc.nextInt();
      tax = taxCal(income);
      System.out.println((int)tax);

     
   }
   double taxCal(int money){
      double tax;
      if (money >= 80000000){
         tax = money * 0.37; 
      }
      else if (money > 40000000){
         tax = money * 0.28;
      }
      else if (money > 10000000){
         tax = money * 0.19; 
      }
      else tax = money * 0.095; 

      return tax;
   }


}