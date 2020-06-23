import java.io.IOException;
 

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        
        for (int i = 1; i <= n; i++) {
            System.out.print(i+" "+ i*i + " "+ i*i*i);
            System.out.println();
            System.out.print(i+" "+ (i*i+1) + " "+ (i*i*i+1));
            System.out.println();
        }
    }
}
