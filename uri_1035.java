import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a, b, c, d;
        
        a = s.nextInt();
        b = s.nextInt();
        c = s.nextInt();
        d = s.nextInt();
        
       if(a%2==0 && b>c && d>a && c+d > a+b && c>0 && d>0){
       
           System.out.println("Valores aceitos");
       
       }else{
           System.out.println("Valores nao aceitos");
       
       }
        
    }

}
