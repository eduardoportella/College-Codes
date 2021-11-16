/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula12;

import java.text.DecimalFormat;
import javax.swing.JOptionPane;

/**
 *
 * @author eport
 */
public class Aula12 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        float n, s=0, p=0, i=0, acimadecem=0, elementos=0, media;
        do {
            n = Integer.parseInt(JOptionPane.showInputDialog(null,
                    "Informe um número:\n (valor 0 interrompe)"));
            s+= n;
            if (n!=0){
                if (n%2==0){
                    p+=1;
                } else{
                    i+=1;
                } if (n>100){
                    acimadecem += 1;
                }
                elementos += 1;
            }
        } while (n != 0);
        media = s/elementos;
        JOptionPane.showMessageDialog(null, "\nResultado Final\n---------------\n" +
                "\nTotal de valores: " + (int) s +
                "\nTotal de pares: " + (int) p +
                "\nTotal de ímpares: " + (int) i +
                "\nAcima de 100: " + (int) acimadecem +
                "\nMédia: "+ media);
    }
}
