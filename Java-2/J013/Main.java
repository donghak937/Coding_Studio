import java.util.*;

public class Main {
   public static void main(String[] args){
      Main pStudio = new Main();
      pStudio.J013();
      
   }

   void J013(){
      int kor, eng, math;
      int total;
      double average;

      Scanner sc = new Scanner(System.in);

      kor = sc.nextInt();
      eng = sc.nextInt();
      math = sc.nextInt();

      total = kor + eng + math;
      average = total / 3.0;
      System.out.printf("%d %.1f\n", total, average);
      System.out.printf("Korean - ");
      String passOrFail = kor >= 70 ? "Pass\n" : "Fail\n";
      System.out.printf(passOrFail);
      System.out.printf("English - ");
      passOrFail = eng >= 70 ? "Pass\n" : "Fail\n";
      System.out.printf(passOrFail);
      System.out.printf("Math - ");
      passOrFail = math >= 70 ? "Pass\n" : "Fail\n";
      System.out.printf(passOrFail);
   }


}