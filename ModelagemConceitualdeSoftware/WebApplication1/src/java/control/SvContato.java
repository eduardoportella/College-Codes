/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package control;

import java.io.IOException;
import java.sql.SQLException;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import model.Contato;
import model.DAOContato;

/**
 *
 * @author ferrasa
 */

import model.*;

public class SvContato extends HttpServlet {
    
    private DAOContato dc;
    
    
    @Override
    public void init()
    {
        dc = new DAOContato();
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
        
        //Escrever código
        String ACAO, snome, semail, stelefone;
        
        //valores para ACAO: INSERIR, EXCLUIR, ALTERAR
        ACAO = request.getParameter("ACAO");
        
        snome = request.getParameter("nome");
        semail = request.getParameter("email");
        stelefone = request.getParameter("telefone");
        
        if (ACAO.equalsIgnoreCase("INSERIR"))
        {
        
            Contato c = new Contato();

            c.setNome(snome);
            c.setEmail(semail);
            c.setTelefone(stelefone);


            int id = dc.inserir(c);

            response.sendRedirect("cadContato.jsp?id="+id);
        } else
        if (ACAO.equalsIgnoreCase("EXCLUIR"))
        {
            String id = request.getParameter("id");
            
            int idi = Integer.parseInt(id);
            
            boolean r = dc.excluir(idi);
            
            if (r)
                response.sendRedirect("listarContato.jsp");
            
            
            
        } else
        if (ACAO.equalsIgnoreCase("ALTERAR"))
        {
            
            Contato c = new Contato();
            
            String scod = request.getParameter("cod");
            
            int scodi = Integer.parseInt(scod);
            
            c.setCod_contato(scodi);
            c.setNome(snome);
            c.setEmail(semail);
            c.setTelefone(stelefone);
            
            boolean r = dc.alterar(c);
            
            if (r)
                response.sendRedirect("listarContato.jsp");
            
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
