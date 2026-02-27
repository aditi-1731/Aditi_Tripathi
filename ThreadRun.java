class D extends Thread{
    public void run(){
        for(int i=1;i<=5;i++){
            System.out.println("From D--"+i);
        }
        System.out.println("Exit from D");
    }
}
class B extends Thread{
    public void run(){
        for(int j=1;j<=5;j++){
            System.out.println("From B--"+j);
        }
        System.out.println("Exit from B");
    }
}
class C extends Thread{
    public void run(){
        for(int k=1;k<=5;k++){
            System.out.println("From C--"+k);
        }
        System.out.println("Exit from C");
    }
}
public class ThreadRun{
    public static void main(String[] args){
        new D().run();
        new B().run();
        new C().run();
    }
}