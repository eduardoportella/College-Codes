/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package pessoas;
import java.util.Scanner;

/**
 *
 * @author eport
 */
public class Contribuinte {
    Scanner scanner = new Scanner(System.in);
    Empresa empresa = new Empresa();
    Individual individual = new Individual();
    
    private String nome;
    private Double rendimentoAnual;
    private String resposta;
   
    
    public Double imposto(){
        System.out.print("Pessoa física ou jurídica (f/j)? ");
        resposta = scanner.nextLine();
        
        System.out.print("Nome: ");
        this.nome = scanner.nextLine();
        
        System.out.print("Rendimento anual: ");
        this.rendimentoAnual = Double.parseDouble(scanner.nextLine());
        
        if (resposta.equals("f")){
            System.out.print("Gastos com saúde: ");
            this.individual.setGastosComSaude(Double.parseDouble(scanner.nextLine()));
            
            if (this.individual.getGastosComSaude() < 0) {
                    return -1.0;
            }
            
            if (this.rendimentoAnual < 20000) {
                if (this.individual.getGastosComSaude() > 0) {
                    return (this.rendimentoAnual * 0.15) - (this.individual.getGastosComSaude() - 0.5);
                } else {
                    return this.rendimentoAnual * 0.15;
                }
            } else {
                if (this.individual.getGastosComSaude() > 0){
                    return (this.rendimentoAnual * 0.25) - (this.individual.getGastosComSaude() * 0.5);

                } else{
                    return this.rendimentoAnual * 0.25;
                }
            }
            
        } else if (resposta.equals("j")){
            System.out.print("Número de funcionários: ");
            this.empresa.setNumeroDeFuncionarios(scanner.nextInt());
            
            if (this.empresa.getNumeroDeFuncionarios()< 10) {
                return this.rendimentoAnual * 0.16;
            } else if (this.empresa.getNumeroDeFuncionarios()>= 10){
                return this.rendimentoAnual * 0.14;
            } else {
                return -1.0;
            }
        } else{
            System.out.println("Erro, somente permitido (f/j)");
            return -1.0;
        }
    }

    public String getNome() {
        return nome;
    }
    
}

