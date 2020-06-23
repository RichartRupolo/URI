import java.util.Scanner;
 
/**
 *
 * @author Richart
 */
public class Main {
 
   public int LOL(){
 
   Scanner s = new Scanner(System.in);
        int a,b;
         
        a = s.nextInt();
        b = s.nextInt();
         
        if (a < 0 && a>23 && b < 0 && b > 23){
          
            System.out.println("Valores fora do intervalo.");
             
         return -1;
        }
         
        if(a>b){
         
            a= a-b;
            System.out.println("O JOGO DUROU "+ (24-a) +" HORA(S)");
         
        }
         
        if(a==b){
         
         System.out.println("O JOGO DUROU 24 HORA(S)");
        }
         
        if (a<b){
            if (b==0){
             
                b=24;
                 
            }
             
            System.out.println("O JOGO DUROU "+ (b - a) +" HORA(S)");
         
        }
        return (0);
}    
     
    public static void main(String[] args) {
        Main uri = new Main();
        uri.LOL();
      
         
    }
     
}