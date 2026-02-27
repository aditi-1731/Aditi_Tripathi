import java.util.Scanner;
public class Palindrome {
    public static void main(String[] args){
        try (Scanner sc=new Scanner(System.in)){
            System.out.print("Enter a number: ");
            int n = sc.nextInt();
            int num,reverse=0,remain;
            num =n;
            while(n!=0){
                remain = n%10;
                reverse = reverse*10+remain;
                n = n/10;
            }
            if (num==reverse){
                System.out.println(num+" is a palindrome");
            }
            else{
                System.out.println(num+" is not palindrome");
            }
        }
    }
}
