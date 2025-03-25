import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J012();
      
   }

   void J012(){
      double m2_area, pyung_area;

      Scanner sc = new Scanner(System.in);

      m2_area = sc.nextDouble();

      pyung_area = m2_area / 3.305;
      System.out.printf("%.1f\n", pyung_area);
      HowBig(pyung_area);
   }

   void HowBig(double room){
      if (room >= 50) System.out.printf("huge");
      else if (room >= 30) System.out.printf("large");
      else if (room >= 15) System.out.printf("normal");
      else System.out.printf("small");
   }

}