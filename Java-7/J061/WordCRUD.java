import java.util.ArrayList;
import java.util.Scanner;

public class WordCRUD {
    ArrayList<Word> list;

    public WordCRUD() {
        list = new ArrayList<Word>();
    }

    void addWord() {
        String english, korean;
        int level;
        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("English > ");
        english = s.next();
        s.nextLine();

        System.out.print("Korean > ");
        korean = s.nextLine();

        System.out.print("Level (1~3) > ");
        level = s.nextInt();

        Word new_word = new Word(english, korean, level);
        list.add(new_word);
    }

    void editWord() {
        String english, korean;
        int level;
        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a word to edit > ");
        english = s.next();
        s.nextLine();

        for(Word word : list){
            if(word.getWord().equals(english)){
                System.out.print("Korean > ");
                korean = s.nextLine();
                word.setDescription(korean);

                System.out.print("Level (1~3) > ");
                level = s.nextInt();
                word.setLevel(level);

                return;
            }
        }
        System.out.printf("No word %s found\n", english);
        return;
    }

    void listWord() {
        for (int i = 0; i < list.size(); i++) {
            System.out.printf("%d. %s\n", i + 1, list.get(i).toString());
        }
    }

    void deleteWord() {
        String english;
        Scanner s = new Scanner(System.in, "EUC-KR");

        System.out.print("Write a word to delete > ");
        english = s.next();
        s.nextLine();

        for (int i = 0; i < list.size(); i++) {
           if(list.get(i).getWord().equals(english)){
            list.remove(i);
            System.out.printf("Word %s deleted\n", english);
            return;
           }
        }
        System.out.printf("No word %s found\n", english);
        return;
    }
}