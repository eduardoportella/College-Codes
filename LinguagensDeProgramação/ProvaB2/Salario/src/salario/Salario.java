/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package salario;
import java.util.Scanner;

/**
 *
 * @author eport
 */
public class Salario {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        Empregado empregado = new Empregado();
        
        System.out.print("Nome: ");
        empregado.setNome(scanner.nextLine());
        
        System.out.print("Salário Bruto: ");
        empregado.setSalarioBruto(Double.parseDouble(scanner.nextLine()));
        
        System.out.print("Imposto: ");
        empregado.setImposto(Double.parseDouble(scanner.nextLine()));
        
        System.out.println(empregado.toString());
        
        
        System.out.print("Em que porcentagem aumentar o salario? ");
        empregado.aumentarSalario(Double.parseDouble(scanner.nextLine()));
        
        System.out.println(empregado.toString(true));
        
        
        
    }
    
}
