import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.0");

        double a, b, c,result;
        boolean aux=false;

        a = s.nextDouble();
        b = s.nextDouble();
        c = s.nextDouble();
                if (Math.abs(b - c)  < a && a < (b + c)){
                aux = true;
                }
                 if (Math.abs( a - c)  < b && b < ( a  + c)){
                  aux = true;
                 }
                 if (Math.abs( a - b)  < c && c < ( a  + b )){
                  aux = true;
                 }
        if(aux == false){
        
            
         result = ((a+b)*c)/2;
            System.out.println("Area = "+ df.format(result));
        
        }else{
        
          result = a+b+c;
            System.out.println("Perimetro = "+ df.format(result));
        }
              
       

    }
}
