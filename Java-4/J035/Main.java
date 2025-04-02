import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J035();
    }

    void J035(){
        String date;
        Scanner sc = new Scanner(System.in);
       
        date = sc.nextLine();
        int answer = 0;

        answer += Integer.parseInt(date.substring(0,1));
        answer += Integer.parseInt(date.substring(1,2));
        answer += Integer.parseInt(date.substring(2,3));
        answer += Integer.parseInt(date.substring(3,4));
        answer += Integer.parseInt(date.substring(4,6));
        answer += Integer.parseInt(date.substring(6,8));

        System.out.println(answer);
        sc.close();
   }

}