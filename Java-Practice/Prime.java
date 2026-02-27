//WAP to check whether no. is prime or not
import java.util.Scanner;
public class Prime{
    public static void main(String[] args){
        try (Scanner sc = new Scanner(System.in)) {
        System.out.print("Enter a number: ");
        int n = sc.nextInt();
        boolean isprime = true;
        if(n<=1){
            isprime =false;
        }
        else{
            for(int i=2;i<=n/2;i++){
                if (n%i==0){
                    isprime = false;
                    break;
                }
            }
        }
        if (isprime){
            System.out.println(n +" is a Prime number");
        }
        else{
            System.out.println(n +" is Not a prime number");
        }
        sc.close();
    }
}}
