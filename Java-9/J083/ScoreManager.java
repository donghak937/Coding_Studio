import java.util.ArrayList;

public class ScoreManager {
    private ArrayList<Score> scores;

    public ScoreManager(){
        scores = new ArrayList<>();
    }
    public void addScore(Score score){
        scores.add(score);
    }

    public void printSub(){
        int total = 0;
        for(int i = 0; i < scores.size(); i++){
            total += scores.get(i).getKor();
        }
        System.out.printf("국어 총점 : %d 평균 점수 : %.1f\n", total, (double)total / scores.size());
        total = 0;
        for(int i = 0; i < scores.size(); i++){
            total += scores.get(i).getEng();
        }
        System.out.printf("영어 총점 : %d 평균 점수 : %.1f\n", total, (double)total / scores.size());
        total = 0;
        for(int i = 0; i < scores.size(); i++){
            total += scores.get(i).getMat();
        }
        System.out.printf("수학 총점 : %d 평균 점수 : %.1f\n", total, (double)total / scores.size());
    }

    public void printStudent(){
        for(int i = 0; i < scores.size(); i++){
            System.out.printf("%d번 학생 총점 : %d 평균 점수 : %.1f\n",i+1 ,scores.get(i).getSum(), scores.get(i).getAvg());
        }  
    }

    public String highStudent(){
        int max = 0;
        for(int i = 0; i < scores.size(); i++){
            if (scores.get(i).getSum() > scores.get(max).getSum()){
                max = i;
            }
        }
        return scores.get(max).toString();
    }
}
