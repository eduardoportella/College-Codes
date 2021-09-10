
package model;

import java.sql.SQLException;
import java.util.ArrayList;
import util.Conexao;


public class DAOImovel {
    private Conexao con;
    public DAOImovel() throws ClassNotFoundException, SQLException{
        con = new Conexao();
    }
    
    public int inserir(Imovel i){
        int r=0;
        
        if (i != null)
            r = con.inserir("INSERT INTO public.imovel(endereco, tipo, pronto, quartos, garagem, tamanho, aluguel, preco) VALUES ('"+i.getEndereco()+"', '"+i.getTipo()+"', '"+i.getPronto()+"', '"+i.getQuartos()+"', '"+i.getGaragem()+"', '"+i.getTamanho()+"', '"+i.getAluguel()+"', '"+i.getPreco()+"')");
//                r = b.inserir("INSERT INTO public.contato(nome, email, telefone) VALUES ('"+i.getTipo()+"', '"+i.getAluguel()+"', '"+i.getQuartos()+"')");
            
        return r;
    }
    
    public ArrayList<Imovel> pesquisar(String sql){
        ArrayList<Imovel> v = new ArrayList<>();
        ResultSet r = con.pesquisar(sql);
        
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
        
        return v;
    }

   public boolean excluir (int idImovel){
       int r = 0;
                   
       r = con.excluir("DELETE FROM imovel WHERE idImovel = "+idImovel);
       if (r <=0)
           return false;
       
       return true;
   }
    
    public Imovel getById(String Cod_imovel){
        Imovel i = new Imovel();
        ResultSet r = con.pesquisar("SELECT * FROM imovel WHERE cod_imovel = "+i.getCod_imovel());
        
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
        
       return null;
    }
   
    public boolean alterar(Imovel i){
        int r;
        
        r = con.atualizar("UPDATE imovel SET endereco='"+i.getEndereco()+"'"
                + " tipo = '"+i.getTipo()+"' pronto = '"+i.getPronto()+"'"+" quartos = '"+i.getQuartos()+"' garagem = '"+i.getGaragem()+"'"
                        + " tamanho = '"+i.getTamanho()+"' aluguel = '"+i.getAluguel()+"' preco = '"+i.getPreco()+"'  WHERE cod_imovel = "+i.getCod_imovel());
        
        if(r<=0){
            return false;
        }
        return true;
        
    }
   
   
}
