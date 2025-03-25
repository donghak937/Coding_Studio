import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J022();
    }

    void J022(){
        double m2_area, pyung_area;
        int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 10; i++){
            m2_area = sc.nextDouble();
            pyung_area = m2_area / 3.305;

            if(HowBig(pyung_area) == 4) count4++;
            else if(HowBig(pyung_area) == 3) count3++;
            else if(HowBig(pyung_area) == 2) count2++;
            else count1++;
        }
        System.out.printf("small - %d\n", count1);
        System.out.printf("normal - %d\n", count2);
        System.out.printf("large - %d\n", count3);
        System.out.printf("huge - %d\n", count4);
        
        sc.close(); 


    }
    int HowBig(double room){
        if (room >= 50) return 4;
        else if (room >= 30) return 3;
        else if (room >= 15) return 2;
        else return 1;
     }
}