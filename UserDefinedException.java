//Aditi Tripathi(2400320100070)
import java.util.Scanner;
class NegativeAmountException extends Exception{
    public NegativeAmountException(String message){
        super(message);
    }
}
public class UserDefinedException{
    public static void main(String[] args){
        try(Scanner sc= new Scanner(System.in)){
            System.out.println("Enter the amount: ");
            int amount = sc.nextInt();
            try{
                if(amount <0){
                    throw new NegativeAmountException("Error: Negative amount is not allowed!");
                }
                System.out.println("Valid amount entered: "+amount);
            }
            catch(NegativeAmountException e){
                System.out.println(e.getMessage());
            }
        }
    }
}