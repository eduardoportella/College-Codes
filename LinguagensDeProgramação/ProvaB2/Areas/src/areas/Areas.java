/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package areas;
import java.util.Scanner;

/**
 *
 * @author eport
 */
public class Areas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o número de formas: ");
        int quant = scanner.nextInt();
        Double res[] = new Double[quant+1];
        Formato f[] = new Formato[quant+1];
        for(int i=0; i<quant; i++){
            f[i] = new Formato();
            System.out.println("\nDados do formato " + (i+1));
            res[i] = f[i].area();
        }
        
        System.out.println("\nÁrea dos Formatos: ");
        for(int i = 0; i<quant; i++){
            System.out.println(String.format("%.2f" , res[i]));
        }
        
    }
    
}
