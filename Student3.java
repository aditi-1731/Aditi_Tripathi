//Default & parameterized constructor example
import java.util.Scanner;
class Student3{
    int id;
    double marks;
    String name;
    /*default constructor
    void display(){
        System.out.println(id+" "+name);
    }*/
    //Parameterized constructor
    Student3(int id,String name,double marks){
        this.id = id;
        this.name =name;
        this.marks = marks;
    }
    void display(){
        System.out.println("------Student Details------");
        System.out.println("Roll No.: "+id);
        System.out.println("Name: "+name);
        System.out.println("Marks: "+marks);
    }
    public static void main(String args[]){
        try(Scanner sc=new Scanner(System.in)){
            System.out.print("Enter roll no.: ");
            int id=sc.nextInt();
            sc.nextLine();
            System.out.print("Enter name: ");
            String name =sc.nextLine();
            System.out.print("Enter marks: ");
            double marks =sc.nextDouble();
        Student3 s1= new Student3(id,name,marks);
        s1.display();
    }
}}