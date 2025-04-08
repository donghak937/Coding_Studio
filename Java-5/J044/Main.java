import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J044();
    }

    void J044(){
        MakePW a = new MakePW();
        
   }

}

class MakePW{
    Random random = new Random();
    Scanner sc = new Scanner(System.in);
    public MakePW(){
        int input = sc.nextInt();
        make(input);
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
    
}


