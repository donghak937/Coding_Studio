import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J036();
    }

    void J036(){
        String str;
        String reverse;
        Scanner sc = new Scanner(System.in);
       
        str = sc.nextLine();
        str = str.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]", "");
        char[] arr = str.toCharArray();
        char[] reversedArr = new char[arr.length];
        for(int i = 0; i < str.length(); i++){
            reversedArr[i] = arr[str.length() - 1 - i] ;
        }
        reverse = new String(reversedArr);
        if (reverse.equals(str)) System.out.println("Yes");
        else System.out.println("No");

        sc.close();
   }

}