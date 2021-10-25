/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package figura;
import java.util.Scanner;


/**
 *
 * @author eport
 */
public class Figura {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);

        Retangulo retangulo = new Retangulo();
        System.out.print("Digite a altura do retângulo: ");
        double altura = Double.parseDouble(scanner.nextLine());
        System.out.print("Digite a largura do retângulo: ");
        double largura = Double.parseDouble(scanner.nextLine());
        
        retangulo.setAltura(altura);
        retangulo.setLargura(largura);
        
        System.out.println("Area = " + retangulo.area());
        System.out.println("Perímetro = " + retangulo.perimetro());
        System.out.println("Diagonal = " + retangulo.diagonal());
        
    }
    
}
