import java.util.*;

public class Main {
   public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J030();
    }

    void J030(){

        String[] names = {"James", "David", "Simon", "Peter", "Jason"};
        int[][] sheet = new int[5][10];
        int[] answer = {1,2,3,4,1,2,3,4,3,2};
        int[] grade = new int[5];
        int count = 0; //학생 수 세는 변수

        Scanner sc = new Scanner(System.in);

        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 10; j++){
                sheet[i][j] = sc.nextInt();
                if (sheet[i][j] == answer[j]) grade[i]++;
            }
        }


        System.out.printf("1st : ");
        for(int i = 0; i < 5; i++){
            if (grade[i] >= 9){
                System.out.printf("%s ", names[i]);
                count++;
            }
        }
        System.out.printf("(%d)\n", count);
        count = 0;

        System.out.printf("2nd : ");
        for(int i = 0; i < 5; i++){
            if (grade[i] >= 7 && grade[i] <= 8){
                System.out.printf("%s ", names[i]);
                count++;
            }
        }
        System.out.printf("(%d)\n", count);
        count = 0;

        System.out.printf("Fail : ");
        for(int i = 0; i < 5; i++){
            if (grade[i] <= 6){
                System.out.printf("%s ", names[i]);
                count++;
            }
        }
        System.out.printf("(%d)\n", count);
        
        
        sc.close(); 
    }

}