import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J002();
   }

   void J002(){
      double c_degree, f_degree;

      Scanner sc = new Scanner(System.in);

      c_degree = sc.nextDouble();

      f_degree = c_degree * 1.8 + 32;
      System.out.printf("%.1f", f_degree);
   }

}