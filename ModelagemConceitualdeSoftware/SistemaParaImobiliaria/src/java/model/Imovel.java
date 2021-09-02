/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

/**
 *
 * @author eport
 */
public class Imovel {
    private int cod_imovel;
    private String endereco;
    private String tipo;
    private String pronto;
    private String quartos;
    private String garagem;
    private String tamanho;
    private String aluguel;
    private String preco;

    /**
     * @return the cod_imovel
     */
    public int getCod_imovel() {
        return cod_imovel;
    }

    /**
     * @param cod_imovel the cod_imovel to set
     */
    public void setCod_imovel(int cod_imovel) {
        this.cod_imovel = cod_imovel;
    }

    /**
     * @return the endereco
     */
    public String getEndereco() {
        return endereco;
    }

    /**
     * @param endereco the endereco to set
     */
    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    /**
     * @return the tipo
     */
    public String getTipo() {
        return tipo;
    }

    /**
     * @param tipo the tipo to set
     */
    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    

    /**
     * @return the pronto
     */
    public String getPronto() {
        return pronto;
    }
    
    public void setPronto(String pronto) {    
        this.pronto = pronto;
    }

    /**
     * @return the quartos
     */
    public String getQuartos() {
        return quartos;
    }

    /**
     * @param quartos the quartos to set
     */
    public void setQuartos(String quartos) {
        this.quartos = quartos;
    }

    /**
     * @return the garagem
     */
    public String getGaragem() {
        return garagem;
    }

    /**
     * @param garagem the garagem to set
     */
    public void setGaragem(String garagem) {
        this.garagem = garagem;
    }

    /**
     * @return the tamanho
     */
    public String getTamanho() {
        return tamanho;
    }

    /**
     * @param tamanho the tamanho to set
     */
    public void setTamanho(String tamanho) {
        this.tamanho = tamanho;
    }
    
    
    public String getAluguel() {
        return aluguel;
    }

    public void setAluguel(String aluguel) {
        this.aluguel = aluguel;
    }
    
    /**
     * @return the preco
     */

    public String getPreco() {
        return preco;
    }

    public void setPreco(String preco) {
        this.preco = preco;
    }
    
}
