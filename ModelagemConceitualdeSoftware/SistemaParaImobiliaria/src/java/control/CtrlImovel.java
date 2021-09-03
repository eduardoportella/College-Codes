/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package control;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

/**
 *
 * @author eport
 */

import model.*;
public class CtrlImovel extends HttpServlet {
    
    private DAOImovel dc;
    
    @Override
    public void init(){
        dc = new DAOImovel();
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
        String sendereco, stipo, spronto, squartos, sgaragem, stamanho, saluguel, spreco;
        
        sendereco = request.getParameter("endereco");
        stipo = request.getParameter("tipo");
        spronto = request.getParameter("pronto");
        squartos = request.getParameter("quartos");
        sgaragem = request.getParameter("garagem");
        stamanho = request.getParameter("tamanho");
        saluguel = request.getParameter("aluguel");
        spreco = request.getParameter("preco");
        
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
