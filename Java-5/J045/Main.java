import java.util.Random;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J045();
    }

    void J045() {
        MakePW a = new MakePW();

    }

}

class MakePW {
    Random random = new Random();
    Scanner sc = new Scanner(System.in);

    public MakePW() {
        // int input = sc.nextInt();
        // make(input);
        int input1 = sc.nextInt();
        int input2 = sc.nextInt();
        makeCode(input1, input2);
    }

    public void make(int length) {
        char a[] = new char[length];
        String b;
        for (int i = 0; i < length; i++) {
            a[i] += (char) random.nextInt(26) + 65;
        }
        b = new String(a);
        System.out.println(b);
    }

    public void makeCode(int length1, int length2) {
        char a[] = new char[length1];
        String b;
        char c[] = new char[length1];
        String d;

        for (int i = 0; i < length1; i++) {
            a[i] += (char) random.nextInt(26) + 65;
            if (a[0] == '0') {
                i--;
                a[0] = 0;
            }
        }
        b = new String(a);
        for (int i = 0; i < length2; i++) {
            c[i] += (char) random.nextInt(10) + 48;
        }
        d = new String(c);
        System.out.println(b + "-" + d + "\n");

    }

}
