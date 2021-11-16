/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula26;

/**
 *
 * @author eport
 */
public class Bolsista extends Aluno{
    private float bolsa;
    
    public void renovarBolsa(){
        System.out.println("Renovando bolsa de " + this.nome);
    }
    
    
    @Override
    public void pagarMensalidade(){
        System.out.println(this.nome + " é bolsista! Pagamento facilitado");
    }

    public float getBolsa() {
        return bolsa;
    }

    public void setBolsa(float bolsa) {
        this.bolsa = bolsa;
    }
    
 
}
