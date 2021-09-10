
package control;

import java.io.IOException;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import model.Imovel;
import model.DAOImovel;

/**
 *
 * @author padil
 */
    import model.*;
public class CrtlImovel extends HttpServlet {

    private DAOImovel dc;
    
    @Override
    public void init(){
        try {
            dc = new DAOImovel();
        } catch (ClassNotFoundException ex) {
            Logger.getLogger(CrtlImovel.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SQLException ex) {
            Logger.getLogger(CrtlImovel.class.getName()).log(Level.SEVERE, null, ex);
        }
        
    }
    /**
     * Processes requests for both HTTP <code>GET</code> and <code>POST</code>
     * methods.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    protected void processRequest(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        response.setContentType("text/html;charset=UTF-8");
        
       
        //Escrever codigo
        String ACAO, sendereco, stipo, spronto, squartos, sgaragem, stamanho, saluguel, spreco;
        
        
        sendereco = request.getParameter("endereco");
        stipo = request.getParameter("tipo");
        spronto = request.getParameter("pronto");
        squartos = request.getParameter("quartos");
        sgaragem = request.getParameter("garagem");
        stamanho = request.getParameter("tamanho");
        saluguel = request.getParameter("aluguel");
        spreco = request.getParameter("preco");
        ACAO = request.getParameter("ACAO");
        
        
        if(ACAO.equalsIgnoreCase("INSERIR")){
            Imovel i = new Imovel();
            i.setEndereco(sendereco);
            i.setTipo(stipo);
            i.setPronto(spronto);
            i.setQuartos(squartos);
            i.setGaragem(sgaragem);
            i.setTamanho(stamanho);
            i.setAluguel(saluguel);
            i.setPreco(spreco);

            int idImovel = dc.inserir(i);

            response.sendRedirect("cadImovel.jsp?idImovel="+idImovel);
        }else if(ACAO.equalsIgnoreCase("EXCLUIR")){
            
            String id = request.getParameter("idImovel");
            
            int idi = Integer.parseInt(id);
            boolean r = dc.excluir(idi);
            
            if(r){
                response.sendRedirect("listarImovel.jsp");
            }
            
        }else if (ACAO.equalsIgnoreCase("ALTERAR")){
            
            Imovel i = new Imovel();
            String scod = request.getParameter("cod");
            int scodi = Integer.parseInt(scod);
            
            i.setCod_imovel(scod);
            i.setEndereco(sendereco);
            i.setTipo(stipo);
            i.setPronto(spronto);
            i.setQuartos(squartos);
            i.setGaragem(sgaragem);
            i.setTamanho(stamanho);
            i.setAluguel(saluguel);
            i.setPreco(spreco);
            
            boolean r = dc.alterar(i);
            
            if(r){
                response.sendRedirect("listarImovel.jsp");
            }
        }
        
    }

    // <editor-fold defaultstate="collapsed" desc="HttpServlet methods. Click on the + sign on the left to edit the code.">
    /**
     * Handles the HTTP <code>GET</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Handles the HTTP <code>POST</code> method.
     *
     * @param request servlet request
     * @param response servlet response
     * @throws ServletException if a servlet-specific error occurs
     * @throws IOException if an I/O error occurs
     */
    @Override
    protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        processRequest(request, response);
    }

    /**
     * Returns a short description of the servlet.
     *
     * @return a String containing servlet description
     */
    @Override
    public String getServletInfo() {
        return "Short description";
    }// </editor-fold>

}
       
        
     
          
  

    
    
    
   
