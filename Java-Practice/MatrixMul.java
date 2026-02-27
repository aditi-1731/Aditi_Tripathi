// Program to create matrix multiplication
import java.util.Scanner;
public class MatrixMul{
    public static void main(String[] args){
        try(Scanner sc=new Scanner(System.in)){
            System.out.print("Enter rows of first matrix: ");
            int r1=sc.nextInt();
            System.out.print("Enter column of first matrix: ");
            int c1=sc.nextInt();
            System.out.print("Enter rows of second matrix: ");
            int r2=sc.nextInt();
            System.out.print("Enter column of second matrix: ");
            int c2=sc.nextInt();
            if (c1!=r2){
                System.out.println("Matrix multiplication not possible");
                return ;
            }
            int A[][] = new int[r1][c1];
            int B[][] = new int[r2][c2];
            int C[][] = new int[r1][c2];
            System.out.println("Enter the elements of matrix A: ");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    A[i][j] = sc.nextInt();
                }
            }
            System.out.println("Enter the elements of matrix B: ");
            for(int i=0;i<r2;i++){
                for(int j=0;j<c2;j++){
                    B[i][j] = sc.nextInt();
                }
            }
            //Matrix Multiplication of A and B :
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    C[i][j]=0;
                    for(int k=0;k<c1;k++){
                        C[i][j]+= A[i][k]*B[k][j];
                    }
                }
            }
            System.out.println("Matrix multiplication of A and B: ");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c2;j++){
                    System.out.print(C[i][j]+" ");
                }
                System.out.println();
            }
        }
    }
}
