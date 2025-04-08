import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J043();
    }

    void J043(){
        Lotto a = new Lotto();
        //a.printNumbers();
        System.out.println("<< 초기 로또 번호 >>");
        a.remakeAuto();
        a.remake();
        int nums[] = new int[6];

        for(int i = 0; i < 6; i++){
            nums[i] = a.sc.nextInt();
            for(int j = 0; j < nums.length; j++){
                if(i != j && nums[i] == nums[j]){
                    System.out.printf("%d 가 중복 됩니다! \n", nums[i]);
                    i--;
                    break;
                }
            }
        }
        System.out.printf("맞은 숫자의 개수: %d",a.checkLotto(nums));
        a.sc.close();
   }

}

class Lotto{
    int[] numbers = new int[6];
    Random random = new Random();
    Scanner sc = new Scanner(System.in);

    public Lotto(){ // 로또 6자리
        // int[] numbers = new int[6];
        //생성자자여서 여기서 선언하면 되는 것 아닌가?
        //여기서 생성하면 다른곳에서 사용가능한게 아닌가?
        for(int i = 0; i < 6; i++){
            numbers[i] = random.nextInt(45) + 1;
            for(int j = 0; j < numbers.length; j++){
                if(i != j && numbers[i] == numbers[j]){
                    numbers[i] = random.nextInt(45) + 1;
                    i--;
                    break;
                }
            }
        }
    }
    
    public void remakeAuto(){ //자동으로 새로 만들기
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = 0;
        }
        for(int i = 0; i < 6; i++){
            numbers[i] = random.nextInt(45) + 1;
            for(int j = 0; j < 6; j++){
                if(i != j && numbers[i] == numbers[j]){
                    numbers[i] = random.nextInt(45) + 1;
                    i--;
                    break;
                }
            }
        }
        printNumbers();
    } 

    public void printNumbers(){ // 로또 출력
        for(int i = 0; i < 6; i++){
            System.out.printf("%d ", numbers[i]);
        }
        System.out.println();
    }

    public void remake(){
        int a;
        
        for (int i = 0; i < numbers.length; i++) {
            numbers[i] = 0;
        }

        for(int i = 0; i < 6; i++){
            a = sc.nextInt();
            numbers[i] = a;
            for(int j = 0; j < numbers.length; j++){
                if(i != j && numbers[i] == numbers[j]){
                    System.out.printf("%d 가 중복 됩니다! \n", numbers[i]);
                    i--;
                    break;
                }
            }
        }
        System.out.println("<<사용자가 입력한 번호>>");
        printNumbers();
        
    }

    public int checkLotto(int[] check){
        int count = 0;
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                if(numbers[i] == check[j]){
                    count++;
                }
            }
        }
        return count;
    }
}


