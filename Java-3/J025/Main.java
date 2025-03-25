import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J025();
    }

    void J025(){
        int[] monthdays = {31,28,31,30,31,30,31,31,30,31,30,31};
        int day, month;
        int day_count = 0;
        Scanner sc = new Scanner(System.in);
        month = sc.nextInt();
        day = sc.nextInt();

        if (month > 12) System.out.println("Wrong date!");

        else if (monthdays[month-1] < day) System.out.println("Wrong date!");

        else{
            for(int i = 0; i < month - 1; i++){
                day_count += monthdays[i];
            }
            day_count += day;
    
            System.out.println(day_count);
        }

        sc.close(); 

    }

}