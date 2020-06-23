import java.util.Scanner;
 
/**
 *
 * @author Richart
 */
public class Main {
 
    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
 
        Scanner s = new Scanner(System.in);
 
        int A = s.nextInt();
        int B = s.nextInt();
        if (A == B) {
            System.out.println("Sao Multiplos");
            System.exit(0);
        }
        if (A > B) {
 
            if (A % B == 0) {
                System.out.println("Sao Multiplos");
            } else {
                System.out.println("Nao sao Multiplos");
 
            }
        }
        else if (B > A) {
            if (B % A == 0) {
                System.out.println("Sao Multiplos");
            } else {
                System.out.println("Nao sao Multiplos");
            }
        }
 
    }
 
}
