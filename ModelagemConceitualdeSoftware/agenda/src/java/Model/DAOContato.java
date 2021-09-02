/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

/**
 *
 * @author ferrasa
 */
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import java.util.logging.Level;
import java.util.logging.Logger;
import util.Conexao;

public class DAOContato {
    
    private Conexao con;
    
    public DAOContato()
    {
        con = new Conexao();

    }
    
    public int inserir(Contato c)
    {
        int r=0;
        
        if (c != null)
            r = con.inserir("INSERT INTO public.contato(nome, email, telefone) VALUES ('"+c.getNome()+"', '"+c.getEmail()+"', '"+c.getTelefone()+"')");
        
        return r;
    }
    
    public ArrayList<Contato> pesquisar(String sql){
        ArrayList<Contato> v = new ArrayList<>();
        
        ResultSet r = con.pesquisar(sql);
        
        try {
            
            while (r.next()){
                
                int cod = r.getInt("cod_contato");
                String nome = r.getString("nome");
                String email = r.getString("email");
                String tel = r.getString("telefone");
                
                Contato c = new Contato();
                
                c.setCod_contato(cod);
                c.setNome(nome);
                c.setEmail(email);
                c.setTelefone(tel);

                v.add(c);
            }
        } catch (SQLException ex) {
            System.out.println("ERRO LISTAGEM: "+ex);
            return null;
        }
        
        return v;
    }
}
