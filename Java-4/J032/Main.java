import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J032();
    }

    void J032(){
        String str;
        String reverse;
        Scanner sc = new Scanner(System.in);
        str = sc.nextLine();
        char[] arr = str.toCharArray();
        char[] reversedArr = new char[arr.length];
        for(int i = 0; i < str.length(); i++){
            reversedArr[i] = arr[str.length() - 1 - i] ;
        }
        reverse = new String(reversedArr);
        System.out.println(reverse);
        sc.close();
   }

}