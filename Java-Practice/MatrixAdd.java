//Matrix Addition 
public class MatrixAdd{
    public static void main(String[] args){
        int A[][]={{1,2},{3,4}};
        int B[][]={{1,1},{1,1}};
        int rows = A.length;
        int cols = A[0].length;
        int C[][] = new int[rows][cols];
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                C[i][j]=A[i][j]+B[i][j];
            }
        }
        System.out.println("Resultant Matrix: ");
        for(int i =0;i<rows;i++){
            for(int j=0;j<cols;j++){
                System.out.print(C[i][j]+" ");
            }
            System.out.println();
        }

    }

}
