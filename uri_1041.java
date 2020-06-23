import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        double a, b;

        a = s.nextDouble();
        b = s.nextDouble();

        if (a == 0 && b == 0) {
            System.out.println("Origem");
        } else if (a > 0 && b > 0) {

            System.out.println("Q1");
            
        } else if (a < 0 && b > 0) {

            System.out.println("Q2");
            
        } else if (a < 0 && b < 0) {

            System.out.println("Q3");
            
        } else if (a > 0 && b < 0) {

            System.out.println("Q4");
            
        }else if (a != 0 && b == 0) {

            System.out.println("Eixo X");
            
        }else if (a == 0 && b != 0) {

            System.out.println("Eixo Y");
            
        }

    }

}
