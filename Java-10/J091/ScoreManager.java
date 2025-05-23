package J091;
import java.io.*;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ScoreManager {

    Scanner sc = new Scanner(System.in);
    private HashMap<String, Score> h1;

    public ScoreManager(){
        h1 = new HashMap<String, Score>();
    }
    public void addScore(String name, Score score){
        h1.put(name, score);
    }
    public void printSub(){
        int total = 0;

        System.out.println("\n========== 학생 총점 ==========\n");
        for (Map.Entry<String, Score> entry : h1.entrySet()) {
            System.out.print("이름 : " + entry.getKey() +  " "  + entry.getValue());
        }

        System.out.println("\n========== 과목 총점 ==========\n");

        for (Score score : h1.values()) {
            total += score.getKor();
        }
        System.out.printf("국어 총점 : %d 평균 점수 : %.1f\n", total, (double)total / h1.size());
        total = 0;
        for (Score score : h1.values()) {
            total += score.getEng();
        }
        System.out.printf("영어 총점 : %d 평균 점수 : %.1f\n", total, (double)total / h1.size());
        total = 0;
        for (Score score : h1.values()) {
            total += score.getMat();
        }
        System.out.printf("수학 총점 : %d 평균 점수 : %.1f\n\n", total, (double)total / h1.size());
    }

    public void loadData(){
        BufferedReader br = null;
        try{
            String line;
            br = new BufferedReader(new FileReader("J091/J091.txt"));
            while((line = br.readLine()) != null) {
                String[] numbers = line.trim().split(" ");
                String name  = numbers[0];
                int kor = Integer.parseInt(numbers[1]);
                int eng = Integer.parseInt(numbers[2]);
                int mat = Integer.parseInt(numbers[3]);
                addScore(name, new Score(kor, eng, mat));
                line ="";
            }
            br.close();
        } catch (FileNotFoundException e) {
            System.out.println("No file Found");
        } catch (IOException e){
            System.out.println("Error reading file");
        }
    }

    public void search(){
        String name;
        System.out.print("Student Name? >> ");
        name = sc.nextLine();
        for (Map.Entry<String, Score> entry : h1.entrySet()) {
            if (entry.getKey().equalsIgnoreCase(name)){
                System.out.println("Found!\n");
                System.out.println("========== " + entry.getKey() + " 학생의 점수 ==========");
                System.out.print(entry.getValue() + "\n");
                return;
            }
        }
        System.out.println(name + "is Not Found.");
    }

    public void edit(){
        String name;
        int kor, eng, mat;
        System.out.print("Student Name? >> ");
        name = sc.nextLine();
        for (Map.Entry<String, Score> entry : h1.entrySet()) {
            if (entry.getKey().equalsIgnoreCase(name)){
                System.out.println("Found!\n");
                System.out.println("========== " + entry.getKey() + " 학생의 점수 ==========");
                System.out.print(entry.getValue() + "\n");
                System.out.print("수정될 국어 점수 : ");
                kor =sc.nextInt();
                System.out.print("수정될 영어 점수 : ");
                eng = sc.nextInt();
                System.out.print("수정될 수학 점수 : ");
                mat = sc.nextInt();
                sc.nextLine();
                entry.setValue(new Score(kor, eng, mat));
                System.out.println("점수가 수정되었습니다.\n");
                System.out.println("========== " + entry.getKey() + " 학생의 점수 ==========");
                System.out.print(entry.getValue() + "\n");
                return;

            }
        }
        System.out.println(name + " is Not Found.");
    }
}
