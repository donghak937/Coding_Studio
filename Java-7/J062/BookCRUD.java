import java.util.ArrayList;
import java.util.Scanner;

public class BookCRUD {
    ArrayList<Book> list;

    public BookCRUD() {
        list = new ArrayList<Book>();
    }

    void addBook() {
        String name;
        String author;
        String category;
        int cost;
        int year;

        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Book name > ");
        name = s.nextLine();

        System.out.print("author > ");
        author = s.nextLine();

        System.out.print("category > ");
        category = s.nextLine();

        System.out.print("cost > ");
        cost = s.nextInt();

        System.out.print("year > ");
        year = s.nextInt();

        Book new_book = new Book(name, author, category, cost, year);
        list.add(new_book);
    }

    void editBook() {
        String name;
        String author;
        String category;
        int cost;
        int year;

        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a name to edit > ");
        name = s.nextLine();
        for(Book book : list){
            if(book.getName().equals(name)){
                System.out.print("author > ");
                author = s.nextLine();
                book.setAuthor(author);
        
                System.out.print("category > ");
                category = s.nextLine();
                book.setCategory(category);
        
                System.out.print("cost > ");
                cost = s.nextInt();
                book.setCost(cost);
        
                System.out.print("year > ");
                year = s.nextInt();
                book.setYear(year);

                return;
            }
        }
        System.out.printf("No Book %s found\n", name);
        return;
    }

    void listBook() {
        for (int i = 0; i < list.size(); i++) {
            System.out.printf("%d. %s\n", i + 1, list.get(i).toString());
        }
    }

    void deleteBook() {
        String name;
        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a name to delete > ");
        name = s.nextLine();

        for (int i = 0; i < list.size(); i++) {
           if(list.get(i).getName().equals(name)){
            list.remove(i);
            System.out.printf("Book %s deleted\n", name);
            return;
           }
        }
        System.out.printf("No Book %s found\n", name);
        return;
    }
}