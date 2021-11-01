/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package pessoas;

import java.util.Scanner;

/**
 *
 * @author eport
 */
public class Pessoas {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        System.out.print("Digite o número de contribuintes: ");
        int quantContribuintes = scanner.nextInt();
        Contribuinte contribuinte[] = new Contribuinte[quantContribuintes];
        Double resultado[] = new Double[quantContribuintes];
        Double somaImpostos = 0.0;

        for (int i=0; i<quantContribuintes; i++) {
            System.out.println("\nContribuinte " + (i+1));
            contribuinte[i] = new Contribuinte();
            resultado[i] = contribuinte[i].imposto();
        }
        
        System.out.println("\n\nImpostos pagos:");  
        for (int i=0; i<quantContribuintes; i++) {
            System.out.print(contribuinte[i].getNome());
            System.out.println(String.format(": %.2f", resultado[i]));
            somaImpostos += resultado[i];
        }
        System.out.println(String.format("\nTOTAL DE IMPOSTOS: %.2f", somaImpostos));
    }
}
