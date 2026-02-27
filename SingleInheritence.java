//Aditi Tripathi(2400320100070)
class Person{
    String name;
    int age;
    Person(String name,int age){
        this.name =name;
        this.age=age;
    }
    void displayPerson(){
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
    }
}
class Student extends Person {
    int rollNo;
    String course;
    Student(String name, int age, int rollNo,String course){
        super(name,age);
        this.rollNo =rollNo;
        this.course = course;
    }
    void displayStudent(){
        displayPerson();
        System.out.println("Roll Number: "+rollNo);
        System.out.println("Course: "+course);
    }
}
public class SingleInheritence{
    public static void main(String[] args){
        Student s1 = new Student("Aditi Tripathi",20,70,"B.Tech CSE");
        s1.displayStudent();
    }
}