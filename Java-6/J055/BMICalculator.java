import java.util.Scanner;

class BMICalculator{
    int height;
    int weight;
    double bmi;
    int level;
    String name;
    

    public BMICalculator(){
        height = 0;
        weight = 0;
        bmi = 0;
        level = 0;
        name = "";
    }
    public void getHW(){
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        height = sc.nextInt();
        weight = sc.nextInt();

        bmi = weight / ((height * 0.01) * (height * 0.01));
        if (bmi < 18.5) level = 0;
        else if (bmi < 25) level = 1;
        else if (bmi < 30) level = 2;
        else level = 3;

        sc.close();
    }

    public void printBMI(){
        System.out.printf("Name : %s , Height : %d , Weight : %d, BMI : %.1f ", name, height, weight, bmi);
        if (level == 3) System.out.println("Obesity");
        else if (level == 2) System.out.println("Overweight");
        else if (level == 1) System.out.println("Healty weight");
        else System.out.println("Under Weight");
    }
}