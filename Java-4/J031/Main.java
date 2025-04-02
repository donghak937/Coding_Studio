import java.util.*;

public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J031();
    }

    void J031(){
        String userid;
        String password;
        String name;

        Scanner sc = new Scanner(System.in);
        userid = sc.nextLine();
        password = sc.nextLine();
        name = sc.nextLine();
        if (password.length() < 3){
            System.out.println("Error! password is too short.");
        }
        
        else{
            password = password.substring(0, 2) + "*".repeat(password.length() - 2);
            System.out.printf("User Id: %s\n", userid);
            System.out.printf("Password: %s\n", password);
            System.out.printf("User Name: %s", name);
        }
        sc.close();
   }

}