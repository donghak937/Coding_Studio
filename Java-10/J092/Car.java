package J092;

public class Car {
    private String car;
    private String date;

    public Car (String car, String date){
        this.car = car;
        this.date = date;
    }

    public String getCar() {
        return car;
    }

    public void setCar(String car) {
        this.car = car;
    }

    public String getDate() {
        return date;
    }

    public void setDate(String date) {
        this.date = date;
    }

    @Override
    public String toString(){
        return null;
    }
}
