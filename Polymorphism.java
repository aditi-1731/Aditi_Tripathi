//Aditi Tripathi(2400320100070)
class Shape{
    void area(){
        System.out.println("Area method of shape");
    }
}
class Circle extends Shape{
    double radius;
    Circle(double r){
        radius =r;
    }
    void area(){
        double area = Math.PI*radius*radius;
        System.out.println("Area of Circle: "+area);
    }
}
class rectangle extends Shape{
    double length,width;
    rectangle(double l,double w){
        length=l;
        width = w;
    }
    void area(){
        double area = length*width;
        System.out.println("Area of Rectangle: "+area);
    }
}
public class Polymorphism{
    public static void main(String[] args){
        Shape s;
        s=new Circle(7.5);
        s.area();
         s = new rectangle(5, 4);
        s.area(); 
    }
}
