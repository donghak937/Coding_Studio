import java.util.ArrayList;
import java.util.Scanner;

public class TodoCRUD {
    ArrayList<Todo> list;

    public TodoCRUD() {
        list = new ArrayList<Todo>();
    }

    void addTodo() {
        String title;
        String detail;
        String category;
        String dueDate;

        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Title > ");
        title = s.nextLine();

        System.out.print("detail > ");
        detail = s.nextLine();

        System.out.print("category > ");
        category = s.nextLine();

        System.out.print("dueDate > ");
        dueDate = s.nextLine();


        Todo new_todo = new Todo(title, detail, category, dueDate);
        list.add(new_todo);
    }

    void editTodo() {
        String title;
        String detail;
        String category;
        String dueDate;

        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a Todo to edit > ");
        title = s.nextLine();
        for(Todo todo : list){
            if(todo.getName().equals(title)){
                System.out.print("detail > ");
                detail = s.nextLine();
                todo.setAuthor(detail);
        
                System.out.print("category > ");
                category = s.nextLine();
                todo.setCategory(category);
        
                System.out.print("dueDate > ");
                dueDate = s.nextLine();
                todo.setdueDate(dueDate);
    
                return;
            }
        }
        System.out.printf("No Todo %s found\n", title);
        return;
    }

    void listTodo() {
        for (int i = 0; i < list.size(); i++) {
            System.out.printf("%d. %s\n", i + 1, list.get(i).toString());
        }
    }

    void deleteTodo() {
        String title;
        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a title to delete > ");
        title = s.nextLine();

        for (int i = 0; i < list.size(); i++) {
           if(list.get(i).getName().equals(title)){
            list.remove(i);
            System.out.printf("Todo %s deleted\n", title);
            return;
           }
        }
        System.out.printf("No Todo %s found\n", title);
        return;
    }
}