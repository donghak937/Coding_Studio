public class Book {
    private String name;
    private String author;
    private String category;
    private int cost;
    private int year;

    public Book(String name){
        this.name = name;
    }
    public Book(String name, String author, String category, int cost, int year){
        this.name = name;
        this.author = author;
        this.category = category;
        this.cost = cost;
        this.year = year;
    }
    public void setYear(int year) {
        this.year = year;
    }
    public void setName(String name) {
        this.name = name;
    }
    public void setAuthor(String author) {
        this.author = author;
    }
    public void setCategory(String category) {
        this.category = category;
    }
    public void setCost(int cost) {
        this.cost = cost;
    }
    
    public String getName() {
        return name;
    }
    public String getAuthor() {
        return author;
    }
    public String getCategory() {
        return category;
    }
    public int getCost() {
        return cost;
    }
    public int getYear() {
        return year;
    }

    public String toString(){
        return String.format("[ %s ] %s | %s\n %d원 %d년도", this.name, this.author, this.category, this.cost, this.year);
    }
}
