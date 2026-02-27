import java.util.Scanner;
class BankAccount {
    private int accountNumber;
    private String accountHolderName;
    private double balance;
    public BankAccount(int accNo, String name, double initialBalance) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = initialBalance;
    }
    public void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            System.out.println("Amount deposited successfully.");
        } else {
            System.out.println("Invalid deposit amount.");
        }
    } 
    public void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            System.out.println("Amount withdrawn successfully.");
        } else {
            System.out.println("Insufficient balance or invalid amount.");
        }
    }
    public void displayBalance() {
        System.out.println("Account Number: " + accountNumber);
        System.out.println("Account Holder: " + accountHolderName);
        System.out.println("Current Balance: " + balance);
    }
}
public class BankApplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Account Number: ");
        int accNo = sc.nextInt();
        sc.nextLine();  
        System.out.print("Enter Account Holder Name: ");
        String name = sc.nextLine();
        System.out.print("Enter Initial Balance: ");
        double balance = sc.nextDouble();
        BankAccount account = new BankAccount(accNo, name, balance);
        int choice;
        do {
            System.out.println("\n--- BANK MENU ---");
            System.out.println("1. Deposit");
            System.out.println("2. Withdraw");
            System.out.println("3. Display Balance");
            System.out.println("4. Exit");
            System.out.print("Enter your choice: ");
            choice = sc.nextInt();
            switch(choice) {
                case 1 -> {
                    System.out.print("Enter amount to deposit: ");
                    double depositAmount = sc.nextDouble();
                    account.deposit(depositAmount);
                }
                case 2 -> {
                    System.out.print("Enter amount to withdraw: ");
                    double withdrawAmount = sc.nextDouble();
                    account.withdraw(withdrawAmount);
                }
                case 3 -> account.displayBalance();
                case 4 -> System.out.println("Thank you for banking with us!");
                default -> System.out.println("Invalid choice. Try again.");
            }
        } while (choice != 4);
        sc.close();
    }
}