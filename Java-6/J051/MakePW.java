import java.util.Random;
import java.util.Scanner;

public class MakePW {
    Random random = new Random();
    Scanner sc = new Scanner(System.in);
    
    public MakePW(){
        int input = sc.nextInt();
        int amount = sc.nextInt();
        make(input, amount);
   }
    public void make(int length){
        char a[] = new char[length];
        String b;
        for(int i = 0 ; i < length; i++){
            a[i] += (char)random.nextInt(26)+65;
        }
        b = new String(a);
        System.out.println(b);
    }
    public void make(int length, int amount){
        String a = "";
        for(int j = 0; j < amount; j++){
            a = "";
            for(int i = 0 ; i < length; i++){
                a += (char)(random.nextInt(26)+65);
            }
            System.out.println(a);
        }
    }
}
