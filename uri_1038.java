import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a;
        double b;
        DecimalFormat df = new DecimalFormat("0.00");
       
        a = s.nextInt();
        b = s.nextInt();

        switch (a) {
            case 1:
                b = b*4.00;
                break;
                
            case 2:
                b = b*4.50;
                break;
                
            case 3:
                 b = b*5.00;
                break;
            case 4:
                b = b*2.00;
                break;
            case 5:
                b = b*1.50;
                break;

        }
        
        System.out.println("Total: R$ "+df.format(b));

    }

}
