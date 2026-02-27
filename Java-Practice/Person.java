// Java lecture on 28.01.26
public class Person{
    String name;
    int age;
    public Person(String n,int a){
        name = n;
        age = a;
    }
    public void display(){
        System.out.println("Name:" +name);
        System.out.println("Age:" +age);}
    public static void main(String[] args){
        Person P1= new Person("Aditi",20);
        Person P2= new Person("Saubhagya",20);
        P1.display();
        P2.display();
    }
    
}
