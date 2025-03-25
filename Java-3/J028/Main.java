import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J028();
    }

    void J028(){
        int[][] jumsu = new int[5][3];
        int[] sum_stdent = new int[5];
        double[] average_student = new double[5];
        char[] grade = new char[5];
        int[] sum_class = new int[3];
        double[] average_class = new double[3];
        Scanner sc = new Scanner(System.in);
       
        for(int i = 0; i < 5; i++){
            jumsu[i][0] = sc.nextInt();
            jumsu[i][1] = sc.nextInt();
            jumsu[i][2] = sc.nextInt();
        }

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 5; j++){
                sum_class[i] +=jumsu[j][i];
            }
            average_class[i] = sum_class[i] / 5.0;
        }
        System.out.printf("Korean - Sum %d, Average %.1f\n",sum_class[0], average_class[0]);
        System.out.printf("English - Sum %d, Average %.1f\n",sum_class[1], average_class[1]);
        System.out.printf("Math - Sum %d, Average %.1f\n",sum_class[2], average_class[2]);

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 3; j++){
                sum_stdent[i] += jumsu[i][j];
            }
            average_student[i] = sum_stdent[i] / 3.0;
            grade[i] = getGrade(average_student[i]);
        }
        for(int i = 0; i < 5; i++){
            System.out.printf("#%d Student - Sum %d, Average %.1f, Grade %c \n",i+1, sum_stdent[i], average_student[i], grade[i]);
        }

        
        sc.close(); 

    }
    char getGrade(double jumsu){
        if (jumsu >= 90) return 'A';
        else if (jumsu >= 80) return 'B';
        else if (jumsu >= 70) return 'C';
        else if (jumsu >= 60) return 'D';
        else return 'F';
    }

}