import java.util.*;
import java.lang.Math;
public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J004();
   }

   void J004(){
    
    double x1, y1; //첫 좌표
    double x2, y2; //두 좌표

    Scanner sc = new Scanner(System.in);

    x1 = sc.nextDouble();
    y1 = sc.nextDouble();
    x2 = sc.nextDouble();
    y2 = sc.nextDouble();

    System.out.printf("%.1f",Math.sqrt(Math.pow((x1 - x2),2) + Math.pow((y1 - y2),2)));
   }

}