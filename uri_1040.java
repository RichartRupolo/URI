import java.text.DecimalFormat;
import java.util.Scanner;

/**
 *
 * @author Richart
 */
public class Main {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);

        double a, b, c, d, e, media;
        DecimalFormat df = new DecimalFormat("0.0");

        a = s.nextDouble();
        b = s.nextDouble();
        c = s.nextDouble();
        d = s.nextDouble();

        media = ((a * 2) + (b * 3) + (c * 4) + d) / 10;
        System.out.println("Media: " + df.format(media));
        if (media > 7) {
            System.out.println("Aluno aprovado.");
            

        } else if (media < 5) {

            System.out.println("Aluno reprovado.");
        } else if (media >= 5 && media < 7) {

            System.out.println("Aluno em exame.");
            e = s.nextDouble();
            media = (media + e) / 2;
            System.out.println("Nota do exame: "+ df.format(e));
            if (media >= 5) {
                System.out.println("Aluno aprovado.");
                System.out.println("Media final: " + df.format(media));
            } else if (media < 5) {

                System.out.println("Aluno reprovado.");
                System.out.println("Media final: " + df.format(media));
            }
        }

    }

}
