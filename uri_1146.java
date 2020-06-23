import java.io.IOException;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = 1;
        while(n != 0){
            n = s.nextInt();
            if(n == 0)
                break;
            System.out.print("1");
            for (int i = 2; i <= n; i++) {
                System.out.print(" "+i);
            }
            System.out.println();
        }
    }
}
