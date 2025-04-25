import java.util.Random;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J041();
    }

    void J041(){
        Lotto a = new Lotto();
        a.printNumbers();
        a.remakeAuto();
   }

}

class Lotto{
    int[] numbers;
    Random random = new Random();

    public Lotto(){ // 로또 6자리
        this.numbers = new int[6];
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
}

