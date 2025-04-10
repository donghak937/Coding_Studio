import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J037();
    }

    void J037(){
        String s1;
        String s2;
        Scanner sc = new Scanner(System.in);

        s1 = sc.nextLine();
        s1 = s1.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]", "");
        s2 = sc.nextLine();
        s2 = s2.replaceAll("[^ㄱ-ㅎㅏ-ㅣ가-힣a-zA-Z0-9]", "");
        char[] s1Arr = s1.toCharArray();
        Arrays.sort(s1Arr);
        char[] s2Arr = s2.toCharArray();
        Arrays.sort(s2Arr);
        s1 = new String(s1Arr);
        s2 = new String(s2Arr);

        if (s1.equals(s2)) System.out.println("Yes");
        else System.out.println("No");

        sc.close();

        //Arrays import
        //string 두개 만들기
        //알파벳 카운트 배열 2개 만들기기
        //캐릭터.isAlphabetic
   }

}