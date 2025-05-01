import java.util.*;

public class Main {
    public static void main(String[] args) {
        Main Pstudio = new Main();
        Pstudio.run();
    }

    public void run() {
        int menu, quit = 0;
        Scanner s = new Scanner(System.in, "EUC-KR");
        TodoCRUD manager = new TodoCRUD();

        while (true) {
            System.out.println("Menu> 1 Add 2 Edit 3 List 4 Delete 0 Exit");
            menu = s.nextInt();

            switch (menu) {
                case 1: manager.addTodo(); break;
                case 2: manager.editTodo(); break;
                case 3: manager.listTodo(); break;
                case 4: manager.deleteTodo(); break;
                default: quit = 1;
            }

            if (quit == 1) break;
        }
    }
}