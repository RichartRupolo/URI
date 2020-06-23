import java.io.IOException;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = 1000;
        int alcool = 0;
        int gasolina = 0;
        int diesel = 0;
        while(x != 4){
            if(x == 1)
                alcool++;
            if(x == 2)
                gasolina++;
            if(x == 3)
                diesel++;
            if(x == 4){
                break;
            }
            x = s.nextInt();
        }
        System.out.println("MUITO OBRIGADO");
        System.out.println("Alcool: "+alcool);
        System.out.println("Gasolina: "+gasolina);
        System.out.println("Diesel: "+diesel);
    }
}
