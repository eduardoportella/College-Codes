/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package areas;
import java.math.BigDecimal;
import java.util.Scanner;

/**
 *
 * @author eport
 */
public class Formato {
    private String color;

    public double area(){
        Scanner scanner = new Scanner(System.in);
        System.out.print("Retangulo ou circulo? (r/c): ");
        String formato = scanner.nextLine();
        if ("r".equals(formato)){
            Retangulo retangulo = new Retangulo();
            System.out.print("Largura: ");
            retangulo.setLargura(Double.parseDouble(scanner.nextLine()));
            System.out.print("Altura: ");
            retangulo.setAltura(Double.parseDouble(scanner.nextLine()));
            
            return retangulo.getAltura()*retangulo.getLargura();
        } else if ("c".equals(formato)){
            Circulo circulo = new Circulo();
            System.out.print("Raio: ");
            circulo.setRaio(Double.parseDouble(scanner.nextLine()));
            
            return Math.PI*(Math.pow(circulo.getRaio(), 2));
        } else {
            System.out.println("Erro");
            return -1;
        }
    }
}
