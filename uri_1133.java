import java.io.IOException;
 
import java.util.Scanner;

public class Main{

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int y = s.nextInt();
        int aux;
        if(y < x){
            aux = x;
            x = y;
            y = aux;
        }
        
        for (int i = x+1; i < y; i++) {
            if(i%5 == 2 || i%5 == 3)
                System.out.println(i);
        }
    }
}
