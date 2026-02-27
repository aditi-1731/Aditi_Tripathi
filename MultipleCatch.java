//Aditi Tripathi(2400320100070)
import java.util.Scanner;
import java.util.InputMismatchException;
public class MultipleCatch{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        try {
            System.out.print("Enter first number (a): ");
            int a = sc.nextInt();
            System.out.print("Enter second number (b): ");
            int b = sc.nextInt();
            int result = a / b;
            System.out.println("Result: " + result);
        }
        catch (ArithmeticException e) {
            System.out.println("Error: Cannot divide by zero!");
        }
        catch (InputMismatchException e) {
            System.out.println("Error: Please enter valid integer values!");
        }
        finally {
            System.out.println("Program execution completed.");
            sc.close();
        }
    }
}