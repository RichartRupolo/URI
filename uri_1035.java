/*
Leia 4 valores inteiros A, B, C e D. A seguir, se B for maior do que C e se D for maior do que A,
 e a soma de C com D for maior que a soma de A e B e se C e D, ambos,
  forem positivos e se a variável A for par escrever a mensagem "Valores aceitos", senão escrever "Valores nao aceitos".

Entrada
Quatro números inteiros A, B, C e D.

Saída
Mostre a respectiva mensagem após a validação dos valores.
*/
import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a, b, c, d;
        
        a = s.nextInt();
        b = s.nextInt();
        c = s.nextInt();
        d = s.nextInt();
        
       if(a%2==0 && b>c && d>a && c+d > a+b && c>0 && d>0){
       
           System.out.println("Valores aceitos");
       
       }else{
           System.out.println("Valores nao aceitos");
       
       }
        
    }

}
