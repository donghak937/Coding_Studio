import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J047();
    }

    void J047() {
        Scanner sc = new Scanner(System.in);
        Mystring a = new Mystring();
        String s1 = sc.nextLine();
        //String s2 = sc.nextLine();

        //System.out.printf(Mystring.whichFirst(s1, s2) + " ");
        //System.out.println(Mystring.whichFirst(s1, s2) == 1 ? s1 : s2);
        System.out.printf("%s %d", Mystring.findLongestWord(s1),Mystring.findLongestWord(s1).length());
    }

}

class Mystring {
    public static int whichFirst(String str1, String str2){
        return str1.compareToIgnoreCase(str2) < 0 ? 1 : 2;
    }
    public static String removeSpaces(String str){
        return str.replaceAll(" ",  "");
    }
    public static String findLongestWord(String str){
        int max = 0;
        char[] s1Arr = str.toCharArray();
        String a = "";
        String b = "";

        for(int i = 0; i < s1Arr.length; i++){
            if(s1Arr[i] == ' '){
                if(a.length() > max){
                    max = a.length();
                    b = a;
                    a = "";
                }
                else a = "";
            }
            else a += s1Arr[i];
        }

        return b;
    }
}

