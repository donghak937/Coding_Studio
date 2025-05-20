public class Score {
    String name;
    int kor, eng, mat;
    int sum;
    double avg;

    public Score(String name, int kor, int eng, int mat){
        this.name = name;
        this.kor = kor;
        this.eng = eng;
        this.mat = mat;
        this.sum = kor + eng + mat;
        this.avg = sum / 3.0;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public int getKor() {
        return kor;
    }

    public void setKor(int kor) {
        this.kor = kor;
        this.sum = this.kor + this.eng + this.mat;
        this.avg = this.sum / 3.0;
    }

    public int getEng() {
        return eng;
    }

    public void setEng(int eng) {
        this.eng = eng;
        this.sum = this.kor + this.eng + this.mat;
        this.avg = this.sum / 3.0;
    }

    public int getMat() {
        return mat;
    }

    public void setMat(int mat) {
        this.mat = mat;
        this.sum = this.kor + this.eng + this.mat;
        this.avg = this.sum / 3.0;
    }

    public int getSum() {
        return sum;
    }

    public double getAvg() {
        return avg;
    }
    @Override
    public String toString(){
        return String.format("이름: %s, 총점: %d, 평균: %.1f, 국어: %d, 영어: %d, 수학: %d\n", name, sum, avg, kor, eng, mat);
    }
}