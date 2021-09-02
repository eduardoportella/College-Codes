/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Model;

/**
 *
 * @author eport
 */
public class Contato {
    private int cod_contato;
    private String nome;
    private String email;
    private String telefone;

    /**
     * @return the cod_contato
     */
    public int getCod_contato() {
        return cod_contato;
    }

    /**
     * @param cod_contato the cod_contato to set
     */
    public void setCod_contato(int cod_contato) {
        this.cod_contato = cod_contato;
    }

    /**
     * @return the nome
     */
    public String getNome() {
        return nome;
    }

    /**
     * @param nome the nome to set
     */
    public void setNome(String nome) {
        this.nome = nome;
    }

    /**
     * @return the email
     */
    public String getEmail() {
        return email;
    }

    /**
     * @param email the email to set
     */
    public void setEmail(String email) {
        this.email = email;
    }

    /**
     * @return the telefone
     */
    public String getTelefone() {
        return telefone;
    }

    /**
     * @param telefone the telefone to set
     */
    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }
    
}
