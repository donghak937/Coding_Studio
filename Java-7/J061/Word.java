public class Word {
    private String word;
    private String description;
    private int level;

    public Word(String word, String description, int level){
        this.word = word;
        this.description = description;
        this.level = level;
    }

    public void setWord(String word){
        this.word = word;
    }
    public void setDescription(String description){
        this.description = description;
    }
    public void setLevel(int level){
        this.level = level;
    }

    public String getWord(){
        return this.word;
    }
    public String getDescription(){
        return this.description;
    }
    public int getLevel(){
        return this.level;
    }
    public String toString(){
        return String.format("[ %s ] %s\nDifficulty : %d", this.word, this.description, this.level);
    }
}
