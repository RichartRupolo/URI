import java.io.IOException;
 
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        int s = 0, n = 0;
        Scanner t = new Scanner(System.in);
        int x = t.nextInt();
        int z = t.nextInt();
        while(z <= x)
            z = t.nextInt();        
            for (int i = x; s <= z; i++) {
                s += x++;
                n++;
            }
        System.out.println(n);
    }
}
