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

import util.Conexao;

public class DAOContato {
    private Conexao b;
        
    public DAOContato(){
        b = new Conexao();
    }
    
    public int inserir(Contato c){
        int r = 0;
        if (c!=null)
            r = b.inserir("')"+"INSERT INTO public.contato(nome, email, telefone) VALUES ('"+c.getNome()+"', '"+c.getEmail()+"', '"+c.getTelefone()+"')");
        
        
        return r;
    }
}
