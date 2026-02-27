//Aditi Tripathi(2400320100070)
class Calculator {
    static int add(int a,int b){
        return a+b;
    }
    static double add(double a,double b){
        return a+b;
    }
    static int add(int a,int b,int c){
        return a+b+c;
    }
    static double add(double a,double b,double c){
        return a+b+c;
    }
    public static void main(String[] args){
        int sum1 = Calculator.add(10,20);
        double sum2= Calculator.add(3.4,5.67);
        int sum3 = Calculator.add(34,56,78);
        double sum4 = Calculator.add(32.5,12.5,67.5);
        System.out.println("The sum of two integers: "+sum1);
        System.out.println("The sum of two floats: "+sum2);
        System.out.println("The sum of three integers: "+sum3);
        System.out.println("The sum of three floats: "+sum4);
    }    
}
