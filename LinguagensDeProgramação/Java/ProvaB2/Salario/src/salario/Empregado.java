/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package salario;

/**
 *
 * @author eport
 */
public class Empregado {
    private String nome;
    private double SalarioBruto;
    private double imposto;
    
    
    public double salarioLiquido(){
        return this.SalarioBruto - this.imposto;
    }
    
    public void aumentarSalario(double porcentagem){
        this.SalarioBruto +=  this.SalarioBruto * porcentagem / 100;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getSalarioBruto() {
        return SalarioBruto;
    }

    public void setSalarioBruto(double SalarioBruto) {
        this.SalarioBruto = SalarioBruto;
    }

    public double getImposto() {
        return imposto;
    }

    public void setImposto(double imposto) {
        this.imposto = imposto;
    }

    @Override
    public String toString() {
        return "Empregado: " + this.nome +", " + this.salarioLiquido();
    }
    
    public String toString(boolean atualizado){
        return "Dados atualizados: " + this.nome +", " + this.salarioLiquido();
    }
    
    
}
