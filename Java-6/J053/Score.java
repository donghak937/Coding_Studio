import java.util.Scanner;

public class Score {
    int count;
    int [][] jumsu;
    int [] sum_student;
    double[] average_student;
    Scanner sc = new Scanner(System.in);

    public Score(int count){
        this.count = count;
        this.jumsu = new int[count][3];
        this.sum_student = new int[count];
        this.average_student = new double[count];
    }
    public void getScore(){
        for(int i = 0; i < this.count; i++){
            for(int j = 0; j < 3; j++){
                this.jumsu[i][j] = sc.nextInt();
                sum_student[i] += jumsu[i][j];
            }
            average_student[i] = sum_student[i] / 3.0; 
        }
    }
    public void printScore(){
        int total = 0;
        System.out.println("Kor");
        for(int i = 0; i < count; i++){
            total += jumsu[i][0];
        }
        System.out.printf("Total : %d, Average : %.1f\n", total, (double)total / (double)count);
        System.out.println("Eng");
        total = 0;
        for(int i = 0; i < count; i++){
            total += jumsu[i][1];
        }
        System.out.printf("Total : %d, Average : %.1f\n", total, (double)total / (double)count);
        System.out.println("Math");
        total = 0;
        for(int i = 0; i < count; i++){
            total += jumsu[i][2];
        }
        System.out.printf("Total : %d, Average : %.1f\n", total, (double)total / (double)count);
        total = 0;
        for(int i = 0; i < this.count; i++){
            System.out.printf("Student %d\n", i+1);
            System.out.printf("total : %d\n", sum_student[i]);
            System.out.printf("Average : %.1f, Grade : ", average_student[i]);
            if (average_student[i] >= 90) System.out.println("A");
            else if (average_student[i] >= 80) System.out.println("B");
            else if (average_student[i] >= 70) System.out.println("C");
            else if (average_student[i] >= 60) System.out.println("D");
            else System.out.println("F");
        }
    }
    public void printScore(int num){

        System.out.printf("Student %d\n", num);
        System.out.printf("total : %d\n", sum_student[num-1]);
        System.out.printf("Average : %.1f, Grade : ", average_student[num-1]);
        if (average_student[num-1] >= 90) System.out.println("A");
        else if (average_student[num-1] >= 80) System.out.println("B");
        else if (average_student[num-1] >= 70) System.out.println("C");
        else if (average_student[num-1] >= 60) System.out.println("D");
        else System.out.println("F");
    }
}
