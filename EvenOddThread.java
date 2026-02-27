//Aditi Tripathi(2400320100070)
class EvenThread extends Thread{
    public void run(){
        try{
            for(int i=2;i<=20;i+=2){
                System.out.println("Even thread: "+i);
                if(i < 20) {
                    Thread.sleep(2000);
                }
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}
class OddThread extends Thread{
    public void run(){
        try{
            for(int i=1;i<=19;i+=2){
                System.out.println("Odd Threads: "+i);
                if(i < 19) {
                    Thread.sleep(5000);
                }
            }
        }
        catch(InterruptedException e){
            System.out.println(e);
        }
    }
}
public class EvenOddThread {
    public static void main(String[] args){
        EvenThread even = new EvenThread();
        OddThread odd=new OddThread();
        even.start();
        odd.start();
    }
}