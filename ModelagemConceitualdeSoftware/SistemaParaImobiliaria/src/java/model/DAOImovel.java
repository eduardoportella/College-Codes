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
public class DAOImovel {
    private Conexao b;
    public DAOImovel(){
        b = new Conexao();
    }
    
    public int inserir(Imovel i){
        int r=0;
        
        if (i != null)
            r = b.inserir("INSERT INTO public.imovel(endereco, tipo, pronto, quartos, garagem, tamanho, aluguel, preco) VALUES ('"+i.getEndereco()+"', '"+i.getTipo()+"', '"+i.getPronto()+"', '"+i.getQuartos()+"', '"+i.getGaragem()+"', '"+i.getTamanho()+"', '"+i.getAluguel()+"', '"+i.getPreco()+"')");
        return r;
    }
}
