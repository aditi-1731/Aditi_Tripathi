//Aditi Tripathi(2400320100070)
import java.util.Scanner;
class AgeValidation{
    static void checkAge(int age) throws Exception{
        if (age<18){
            throw new Exception("Age must be 18 or above.");
        }
        else{
            System.out.println("Access Granted. Age is valid.");
        }
    }
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        try{
            System.out.println("Enter your age: ");
            int age=sc.nextInt();
            checkAge(age);
        }
        catch(Exception e){
            System.out.println("Exception: "+ e.getMessage());
        }
        sc.close();
    }
}