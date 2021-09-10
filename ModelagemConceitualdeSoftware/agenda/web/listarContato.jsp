<%-- 
    Document   : listarContato
    Created on : Aug 16, 2021, 9:08:47 PM
    Author     : ferrasa
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.ArrayList" %>
<%@page import="model.*" %>
 
<jsp:useBean class="model.DAOContato" id="d" scope="page"></jsp:useBean>


<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Agenda - Listagem de Contatos</title>
    </head>
    <body>
        <h2>Contatos</h2>
        <table border="1">
            <thead>
                <tr>
                    <th>Excluir</th>
                    <th>Alterar</th>
                    <th>NOME</th>
                    <th>E-MAIL</th>
                    <th>TELEFONE</th>
                </tr>
            </thead>
            <tbody>
            <%
                ArrayList<Contato> ac = d.pesquisar("SELECT * FROM contato");
                
                for(Contato c : ac)
                {
            %>
                    <tr>
                        <td><a href="/agenda/SvContato?ACAO=EXCLUIR&id=<%=c.getCod_contato() %>"> X </a></td>
                        <td><a href="alterarContato.jsp?id=<%=c.getCod_contato() %>">E</a></td>
                        <td><%=c.getNome() %></td>
                        <td><%=c.getEmail() %></td>
                        <td><%=c.getTelefone() %></td>
                    </tr>
                
            <%  }
            %>
                
            </tbody>
            
        </table>
    
        
    </body>
</html>
