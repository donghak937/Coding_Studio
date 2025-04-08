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
        System.out.println(Mystring.removeSpaces(s1));
    }

}

class Mystring {
    public static int whichFirst(String str1, String str2){
        return str1.compareToIgnoreCase(str2) < 0 ? 1 : 2;
    }
    public static String removeSpaces(String str){
        return str.replaceAll(" ",  "");
    }
}

