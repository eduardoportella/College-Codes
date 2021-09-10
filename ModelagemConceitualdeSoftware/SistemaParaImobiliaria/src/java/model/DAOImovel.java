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

import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import util.Conexao;

public class DAOImovel {
    private Conexao con;
    public DAOImovel(){
        con = new Conexao();
    }
    
    public int inserir(Imovel i){
        int r=0;
        
        if (i != null)
            r = con.inserir("INSERT INTO public.imovel(endereco, tipo, pronto, quartos, garagem, tamanho, aluguel, preco) VALUES ('"+i.getEndereco()+"', '"+i.getTipo()+"', '"+i.getPronto()+"', '"+i.getQuartos()+"', '"+i.getGaragem()+"', '"+i.getTamanho()+"', '"+i.getAluguel()+"', '"+i.getPreco()+"')");
            
        return r;
    }
    
    public ArrayList<Imovel> pesquisar(String sql){
        ArrayList<Imovel> v = new ArrayList<>();
        ResultSet r = con.pesquisar(sql);
        
        try {
            while (r.next()){
                int cod_imovel = r.getInt("cod_imovel");
                String endereco = r.getString("endereco");
                String tipo = r.getString("tipo");
                String pronto = r.getString("pronto");
                String quartos = r.getString("quartos");
                String garagem = r.getString("garagem");
                String tamanho = r.getString("tamanho");
                String aluguel = r.getString("aluguel");
                String preco = r.getString("preco");
                
                Imovel i = new Imovel();
                
                i.setCod_imovel(cod_imovel);
                i.setEndereco(endereco);
                i.setTipo(tipo);
                i.setPronto(pronto);
                i.setQuartos(quartos);
                i.setGaragem(garagem);
                i.setTamanho(tamanho);
                i.setAluguel(aluguel);
                i.setPreco(preco);
                
                v.add(i);

            }
        } catch (SQLException ex) {
            System.out.println("ERRO LISTAGEM: "+ex);
            return null;
        }
        
        return v;
    }
    
    //Código do padilha
    
    public boolean excluir (int idImovel){
       int r = 0;
                   
       r = con.excluir("DELETE FROM public.imovel WHERE cod_imovel = "+idImovel);
       if (r <=0)
           return false;
       
       return true;
   }
    
    public Imovel getById(String idImovel){
        
        ResultSet r = con.pesquisar("SELECT * FROM public.imovel WHERE cod_imovel = "+idImovel);
        
        
        try {
            
            if (r.next())
            {
                
                int cod_imovel = r.getInt("cod_imovel");
                String endereco = r.getString("endereco");
                String tipo = r.getString("tipo");
                String pronto = r.getString("pronto");
                String quartos = r.getString("quartos");
                String garagem = r.getString("garagem");
                String tamanho = r.getString("tamanho");
                String aluguel = r.getString("aluguel");
                String preco = r.getString("preco");

                Imovel i = new Imovel();


                i.setCod_imovel(cod_imovel);
                i.setEndereco(endereco);
                i.setTipo(tipo);
                i.setPronto(pronto);
                i.setQuartos(quartos);
                i.setGaragem(garagem);
                i.setTamanho(tamanho);
                i.setAluguel(aluguel);
                i.setPreco(preco);
                
            return i;
                
            }
        } catch (SQLException ex) {
            System.out.println("ERRO LISTAGEM: "+ex);
            
        }
        
       return null;
    }
   
    public boolean alterar(Imovel i){
        int r;
        
        r = con.atualizar("UPDATE public.imovel SET endereco='"+i.getEndereco()+"', tipo='"+i.getTipo()+"', pronto='"+i.getPronto()+"', quartos='"+i.getQuartos()+"', garagem='"+i.getGaragem()+"', tamanho='"+i.getTamanho()+"', aluguel='"+i.getAluguel()+"', preco='"+i.getPreco()+"' WHERE cod_imovel = "+i.getCod_imovel());
        System.out.println(r);
        if(r<=0){
            return false;
        }
        return true;
        
    }
}
