import java.io.IOException;
 
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int aux = 2;
        System.out.println("1 1 1");
        for (int i = 0; i < x-1; i++) {
            System.out.println(aux + " " + aux * aux + " " + aux * aux * aux);
            aux++;
        }
    }
}
