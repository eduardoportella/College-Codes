/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package estoque;

/**
 *
 * @author eport
 */
public class Produto {
    private String nome;
    private double preco;
    private int quantidade;
    
    public double valorTotalEmEstoque(){
        return this.preco * this.quantidade;
    }
    
    public void addProdutos(int quant){
        this.quantidade += quant;
    }
    
    public void removeProdutos(int quant){
        this.quantidade -= quant;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public double getPreco() {
        return preco;
    }

    public void setPreco(double preco) {
        this.preco = preco;
    }

    public int getQuantidade() {
        return quantidade;
    }

    public void setQuantidade(int quantidade) {
        this.quantidade = quantidade;
    }

    @Override
    public String toString() {
        return "Dados do Produto: " + this.nome + ", " + this.preco + ", " + this.quantidade +
                " unidades, Total: " + this.valorTotalEmEstoque();
    }

    
    
    public String toString(boolean atualizados) {
        return "Dados do Produto atualizados: " + this.nome + ", " + this.preco + ", " + this.quantidade +
                " unidades, Total: " + this.valorTotalEmEstoque();
    }
}
