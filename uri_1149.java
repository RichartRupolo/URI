import java.io.IOException;
 
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a = s.nextInt();
        int aux = a;
        int b = s.nextInt();
        
        while(b <= 0){
            b = s.nextInt();
        }
        for (int i = 1; i < b; i++) {
            aux += ++a;
        }
        System.out.println(aux);
    }
}
