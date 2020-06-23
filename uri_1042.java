import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        int[] vetor = new int[3];
        int[] vetor2 = new int[3];
        int aux;
        boolean troca = true;

        vetor[0] = s.nextInt();
        vetor[1] = s.nextInt();
        vetor[2] = s.nextInt();
        vetor2[0] = vetor[0];
        vetor2[1] = vetor[1];
        vetor2[2] = vetor[2];
        while (troca) {
            troca = false;
            for (int i = 0; i < vetor.length - 1; i++) {
                if (vetor[i] > vetor[i + 1]) {
                    aux = vetor[i];
                    vetor[i] = vetor[i + 1];
                    vetor[i + 1] = aux;
                    troca = true;

                }

            }
        }
        
        for (int i = 0; i < vetor.length; i++) {
            System.out.println(vetor[i]);

        }
        
        System.out.println("");
        
        for (int i = 0; i < vetor2.length; i++) {
            System.out.println(vetor2[i]);

        }

    }
}
