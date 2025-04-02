import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J033();
    }

    void J033(){
        int count;
        String name;
        String longest = "", shortest;
        Scanner sc = new Scanner(System.in);
        count = sc.nextInt();
        name = sc.nextLine();
        name = sc.nextLine();
        shortest = name;
        for(int i = 1; i < count; i++){
            name = sc.nextLine();
            if (longest.length() < name.length()){
                longest = name;
            }
            else if (shortest.length() > name.length()){
                shortest = name;
            }
        }
        System.out.printf("Longest: %s\n", longest);
        System.out.printf("Shortest: %s", shortest);
        sc.close();
   }

}