/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package model;

/**
 *
 * @author Admin Smart
 */
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.ArrayList;
import util.Conexao;

public class DAOCliente {
    
    private Conexao con;
    
    public DAOCliente()
    {
        con = new Conexao();

    }
    
    public int inserir(Cliente c)
    {
        int r=0;
        
        if (c != null)
            r = con.inserir("INSERT INTO public.clientes(nome, email, telefone, endereco) VALUES ('"+c.getNome()+"', '"+c.getEmail()+"', '"+c.getTelefone()+"', '"+c.getEndereco()+"')");
        
        return r;
    }
    
    public ArrayList<Cliente> pesquisar(String sql)
    {
       
            ArrayList<Cliente> v = new ArrayList<>();
            
            ResultSet r = con.pesquisar(sql);
       
        try {
            
            while (r.next())
            {
                
                int cod_cliente = r.getInt("cod_cliente");
                String nome = r.getString("nome");
                String email = r.getString("email");
                String tel = r.getString("telefone");
                String endereco = r.getString("endereco");
                
                Cliente c = new Cliente();
                
                c.setCod_cliente(cod_cliente);
                c.setNome(nome);
                c.setEmail(email);
                c.setTelefone(tel);
                c.setEndereco(endereco);
                
                v.add(c);

                
            }
        } catch (SQLException ex) {
            System.out.println("ERRO LISTAGEM: "+ex);
            return null;
        }
        
        return v;
        
    }
    
    public boolean excluir(int idCliente)
    {
        int r=0;
        
        r = con.excluir("DELETE FROM public.clientes WHERE cod_cliente = "+idCliente);
        
        if (r <= 0)
            return false;
        
        return true;
    }
    
    public Cliente getById(String idCliente)
    {
       
            
        ResultSet r = con.pesquisar("SELECT * FROM public.clientes WHERE cod_cliente = "+idCliente);
       
        try {
            
            if (r.next())
            {
                
                int cod_cliente = r.getInt("cod_cliente");
                String nome = r.getString("nome");
                String email = r.getString("email");
                String tel = r.getString("telefone");
                String endereco = r.getString("endereco");
                
                Cliente c = new Cliente();
                
                c.setCod_cliente(cod_cliente);
                c.setNome(nome);
                c.setEmail(email);
                c.setTelefone(tel);
                c.setEndereco(endereco);
                
               return c;
                
            }
        } catch (SQLException ex) {
            System.out.println("ERRO LISTAGEM: "+ex);
            
        }
        
        return null;
        
    }
    
    public boolean alterar(Cliente c)
    {
        int r;
        
        r = con.atualizar("UPDATE public.clientes SET nome='"+c.getNome()+"', email='"+c.getEmail()+"', telefone='"+c.getTelefone()+"', endereco='"+c.getEndereco()+"' WHERE cod_cliente = "+c.getCod_cliente());
        System.out.println(r);

        if (r <= 0)
            return false;
        
        return true;
    }
    
}
