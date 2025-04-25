import java.util.Scanner;

public class Score {
    int count;
    int [][] jumsu;
    int [] sum_student;
    double[] average_student;
    int[] sum_class;
    double[] average_class;
    Scanner sc = new Scanner(System.in);

    public Score(int count){
        this.count = count;
        this.jumsu = new int[count][3];
        this.sum_student = new int[count];
        this.average_student = new double[count];
        this.sum_class = new int[3];
        this.average_class = new double[3];
    }
    public void getScore(){
        for(int i = 0; i < this.count; i++){
            for(int j = 0; j < 3; j++){
                this.jumsu[i][j] = sc.nextInt();
                sum_student[i] += jumsu[i][j];
                sum_class[j] += jumsu[i][j];
            }
            average_student[i] = sum_student[i] / 3.0;
        }
        for(int i = 0 ; i < 3; i++){
            average_class[i] = sum_class[i] / (double)count;
        }
    }
    public void printScore(){
        System.out.println("Kor");
        System.out.printf("Total : %d, Average : %.1f\n", sum_class[0], average_class[0]);
        System.out.println("Eng");
        System.out.printf("Total : %d, Average : %.1f\n", sum_class[1], average_class[1]);
        System.out.println("Math");
        System.out.printf("Total : %d, Average : %.1f\n", sum_class[2], average_class[2]);

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
    public void printScore(int num, String classname){
        if (num == 0){
            System.out.printf("%s\n",classname);
            System.out.printf("Total : %d, Average : %.1f\n", sum_class[0], average_class[0]);
        }
        else if (num == 1){
            System.out.printf("%s\n",classname);
            System.out.printf("Total : %d, Average : %.1f\n", sum_class[1], average_class[1]);
        }
        else {
            System.out.printf("%s\n",classname);
            System.out.printf("Total : %d, Average : %.1f\n", sum_class[2], average_class[2]);
        }
        
    }
}
