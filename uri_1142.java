import java.io.IOException;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int aux = 1;
        for (int i = 0; i < x; i++) {
            System.out.println(aux + " " + (aux+1) + " " + (aux+2) + " PUM");
            aux += 4;
        }
    }
}
