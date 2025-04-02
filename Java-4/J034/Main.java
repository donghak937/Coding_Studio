import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J034();
    }

    void J034(){
        String[] usernames  = {"kim", "lee", "park", "hong", "choi"};
        String[] passwords = {"1111", "1234", "3456", "3535", "7777"};
        String name, pass;
        Scanner sc = new Scanner(System.in);
        name = sc.nextLine();
        pass = sc.nextLine();

        for(int i = 0; i < 5; i++){
            if (name.equals(usernames[i])){
                if(pass.equals(passwords[i])){
                    System.out.println("Login Ok!");
                    break;
                }
                else{
                    System.out.println("Incorrect Password!");
                    break;
                }
            }
            else if (i == 4){
                System.out.println("No user!");
                break;
            }
        }
        sc.close();
   }

}