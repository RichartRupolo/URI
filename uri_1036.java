/*
Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. Se não for possível calcular as raízes,
 mostre a mensagem correspondente “Impossivel calcular”, caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário,
 imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. 
 Imprima sempre o final de linha após cada mensagem.
*/
import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        double a, b, c,delta,R1,R2;
        
        a = s.nextDouble();
        b = s.nextDouble();
        c = s.nextDouble();
        
        delta = (b*b) -(4*a*c);
       
        if(delta<0 || a<=0){
            System.out.println("Impossivel calcular");
        
        }else{
         
            R1= (-b + Math.sqrt(delta))/(2*a);         
            R2= (-b - Math.sqrt(delta))/(2*a);
              DecimalFormat df = new DecimalFormat();
              df.setMaximumFractionDigits(5);
              df.setMinimumFractionDigits(5);
            System.out.println("R1 = "+df.format(R1));
            System.out.println("R2 = "+df.format(R2));
         
        }
       
        
    }

}
