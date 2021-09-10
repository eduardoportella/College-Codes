
package util;
import java.sql.*;
public class Conexao {
    
    private Connection con;
    
    private final  String driver = "org.postgresql.Driver";
    private final String dbURL = "jdbc:postgresql://localhost:8080/agenda";
    private final String login = "postgres";
    private final String password = "SENHA";
    
    public Conexao() throws ClassNotFoundException, SQLException{
        try{
            Class.forName(driver);
            
            con = DriverManager.getConnection(dbURL, login, password);
        }
        catch(ClassNotFoundException | SQLException e){
            System.err.println("ERRO: FALHA CONEXAO BD.");
            con = null;
        }
    }
    
    public int inserir(String sql){
        Connection c = con;
        Statement st;
        int r=0;
        try {
            st = c.createStatement();
            r = st.executeUpdate(sql, Statement.RETURN_GENERATED_KEYS);
            
            ResultSet resultSet = st.getGeneratedKeys();
            if ( resultSet != null && resultSet.next()){
                r = resultSet.getInt(1);
            }
        }
        catch (SQLException e){
            System.err.println("ERRO - INSERT "+e);
        }
        return r;
    }
    
    public ResultSet pesquisar(String sql)
    {
    	Connection c = con;
        Statement st;
        ResultSet r = null;

        try
        {
            st = c.createStatement(ResultSet.TYPE_SCROLL_INSENSITIVE,
                                      ResultSet.CONCUR_UPDATABLE);
            r = st.executeQuery(sql);
        }
       	catch(SQLException e)
        {
    		System.err.println("ERRO - QUERY: "+e);
            return null;

    	}
        return r;
    }    
   
    public int atualizar(String sql)
    {
        Connection c = con;
        Statement st;
        int r=0;

        try
        {
            st = c.createStatement();
            r = st.executeUpdate(sql);
        }
       	catch(SQLException e)
        {
    		System.err.println("ERRO - UPDATE/DELETE: "+e);

    	}
        return r;
       
}

    public int excluir(String sql){
        return this.atualizar(sql);
    }



public void fechar()
    {
    	try
        {
    		con.close();
    	}
    	catch(Exception e)
        {	
            System.err.println("ERRO - CLOSE: "+e);
        }
    }


}
