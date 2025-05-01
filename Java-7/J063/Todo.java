public class Todo {
    private String title;
    private String detail;
    private String category;
    private String dueDate;

    public Todo(String title){
        this.title = title;
    }
    public Todo(String title, String detail, String category, String dueDate){
        this.title = title;
        this.detail = detail;
        this.category = category;
        this.dueDate = dueDate;
    }

    public void setName(String title) {
        this.title = title;
    }
    public void setAuthor(String detail) {
        this.detail = detail;
    }
    public void setCategory(String category) {
        this.category = category;
    }
    public void setdueDate(String dueDate) {
        this.dueDate = dueDate;
    }
    public String getName() {
        return title;
    }
    public String getAuthor() {
        return detail;
    }
    public String getCategory() {
        return category;
    }
    public String getdueDate() {
        return dueDate;
    }

    public String toString(){
        return String.format("[ %s ] %s %s \n %s", this.title, this.detail, this.category, this.dueDate);
    }
}
