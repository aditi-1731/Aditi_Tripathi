//Aditi Tripathi(2400320100070)
class Task1 implements Runnable{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("Task1 is running...");
        }
    }
}
class Task2 implements Runnable{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("Task2 is running...");
        }
    }
}
public class ThreadTest{
    public static void main(String[] args){
        Task1 t1 =new Task1();
        Task2 t2 = new Task2();
        Thread thread1 = new Thread(t1);
        Thread thread2 = new Thread(t2);
        thread1.start();
        thread2.start();
    }
}