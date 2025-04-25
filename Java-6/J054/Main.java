public class Main {
    public static void main(String[] args){
        Main pStudio = new Main();
        pStudio.J054();
    }

    void J054(){
        int a;   
        String b; 
        Score s = new Score(5);
        s.getScore();

        a = s.sc.nextInt();
        b = s.sc.next();

        s.printScore(a,b);
   }

}



