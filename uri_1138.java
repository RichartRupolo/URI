import static com.sun.org.apache.xalan.internal.xsltc.compiler.sym.EOF;
import static java.lang.Math.floor;
import static java.lang.Math.log10;
import static java.lang.Math.pow;
import java.util.Scanner;



public class Main {

   public static void count (int a, int b) {
  int D[] =new int[10];
  int P = (int) floor(log10(b-a));
  boolean reached_ceil = false;

  for (int i = 0; i < 10; i++)
    D[i] = 0;

  for (int n = a; n <= b; n++) {
    boolean leave = false;
    int B = (int) pow(10,P);
    for (int p = P; p > 0; p--, B/=10) {
      if (n >= B && b - n >= B && n%B == 0) {
        if (p == P)
          reached_ceil = true;
        else if (reached_ceil)
          P = p;
        for (int i = 0; i < 10; i++)
          D[i] += p*B/10;
        int k = n/B;
        while (k > 0) {
          D[k%10] += B;
          k /= 10;
        }
        n += B-1;
        leave = true;
        break;
      }
    }
    if (leave)
      continue;
    int k = n;
    while (k > 0) {
      D[k%10]++;
      k /= 10;
    }
  }

  for (int i = 0; i < 9; i++)
           System.out.print(D[i]+" ");
           System.out.println(D[9]);
 
}


     public static void main(String[] args) {
 int a, b;
 Scanner s = new Scanner(System.in);
  a = s.nextInt();
  b = s.nextInt();
  while (a != 0 || b != 0) {
    count(a,b);
     a = s.nextInt();
  b = s.nextInt();
  }

  //return 0;
    }
    

    
}