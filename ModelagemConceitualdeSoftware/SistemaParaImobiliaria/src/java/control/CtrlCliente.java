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
import model.Cliente;
import model.DAOCliente;

/**
 *
 * @author Admin Smart
 */

import model.*;
public class CtrlCliente extends HttpServlet {
    private DAOCliente dc;
    
    @Override
    public void init()
    {
        dc = new DAOCliente();
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
        
        String ACAO, snome, semail, stelefone, sendereco;
        
        ACAO = request.getParameter("ACAO");
        
        snome = request.getParameter("nome");
        semail = request.getParameter("email");
        stelefone = request.getParameter("telefone");
        sendereco = request.getParameter("endereco");
        
        if (ACAO.equalsIgnoreCase("INSERIR"))
        {
        
            Cliente c = new Cliente();

            c.setNome(snome);
            c.setEmail(semail);
            c.setTelefone(stelefone);
            c.setEndereco(sendereco);


            int idCliente = dc.inserir(c);

            response.sendRedirect("CadCliente.jsp?idCliente="+idCliente);
        } else
        if (ACAO.equalsIgnoreCase("EXCLUIR"))
        {
            String idCliente = request.getParameter("idCliente");
            
            int idi_cliente = Integer.parseInt(idCliente);
            
            boolean r = dc.excluir(idi_cliente);
            
            if (r)
                response.sendRedirect("ListCliente.jsp");

            
            
            
            
        } else
        if (ACAO.equalsIgnoreCase("ALTERAR"))
        {
            
            Cliente c = new Cliente();
            
            String scod_cliente = request.getParameter("cod_cliente");
            
            int scodi_cliente = Integer.parseInt(scod_cliente);
            
            c.setCod_cliente(scodi_cliente);
            c.setNome(snome);
            c.setEmail(semail);
            c.setTelefone(stelefone);
            c.setEndereco(sendereco);
            
            boolean r = dc.alterar(c);
            
            if (r)
                response.sendRedirect("ListCliente.jsp");
 
            
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
