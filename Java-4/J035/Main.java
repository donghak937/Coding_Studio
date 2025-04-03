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

        for(int i = 0; i < 7; i++){
            answer += Integer.parseInt(date.substring(0+i,1+i));
        }

        System.out.println(answer);
        sc.close();
   }

}