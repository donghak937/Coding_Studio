package J092;

import java.text.SimpleDateFormat;
import java.util.Calendar;
import java.util.HashMap;
import java.util.Map;
import java.util.Scanner;

public class ParkingManager {
    Scanner sc = new Scanner(System.in);
    private HashMap<String, Car> h1;
    SimpleDateFormat dateFormat = new SimpleDateFormat("yyyyMMdd HHmm");

    public ParkingManager(){
        h1 = new HashMap<String, Car>();
    }
    public void addCar(String name, Car car){
        h1.put(name, car);
    }

    public void park(){
        String date;
        System.out.print("Enter number, type > ");
        String line = sc.nextLine();
        String[] tokens = line.trim().split("\\s+", 2);

        String number = tokens[0];
        String car = (tokens.length > 1) ? tokens[1] : "";
        
        Calendar cal = Calendar.getInstance();
        date = dateFormat.format(cal.getTime());
        addCar(number, new Car(car, date));
    }

    public void printSub(){
        int count = 1;
        System.out.println("===========================================");
         System.out.printf("%-4s %-10s %-10s %s\n", "", "type", "date", "time");
        for (Map.Entry<String, Car> entry : h1.entrySet()) {
            Car car = entry.getValue();
            System.out.printf("[%d]  %-10s %-10s %s\n",
                count++, entry.getKey(), car.getCar(), car.getDate());
        }
    }

    public void exitCar(){
        String number;
        String date;
        System.out.print("Enter car number to exit > ");
        number = sc.next();
        for (Map.Entry<String, Car> entry : h1.entrySet()) {
            if (entry.getKey().equalsIgnoreCase(number)){
                Calendar cal = Calendar.getInstance();
                date = dateFormat.format(cal.getTime());
                Car car = entry.getValue();
                System.out.println(entry.getKey() + " " + car.getCar() + " " + getMin(car.getDate()) +  " min, Parking fee " + getFee(car.getDate()) + " (current time " + date + ")");
                h1.remove(entry.getKey());
                return;
            }
        }

    }

    public long getMin(String date){
        String now;
        long fee;
        SimpleDateFormat nowone = new SimpleDateFormat("yyyyMMddHHmm");
        Calendar cal = Calendar.getInstance();
        now = nowone.format(cal.getTime());
        date = date.replaceAll(" ",  "");

        fee = Long.parseLong(now) - Long.parseLong(date);
        return fee;
    }

    public long getFee(String date){
        long fee;
        fee = getMin(date) / 10;
        return fee;
    }

}