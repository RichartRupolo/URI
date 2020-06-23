import java.io.IOException;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int x = s.nextInt();
        int y = s.nextInt();
        int i = 1;

        while (i <= y && x < 20 && x > 1 && y > x && y < 100000 ) {
            for (int j = 0; j < x; j++) {
                System.out.print(i);
                if(j < (x-1))
                    System.out.print(" ");
                i++;
            }
            System.out.println();
        }
    }
}
