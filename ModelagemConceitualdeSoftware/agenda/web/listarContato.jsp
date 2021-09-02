<%-- 
    Document   : listarContato
    Created on : 20 de ago. de 2021, 11:55:16
    Author     : eport
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.ArrayList" %>
<%@page import="model.*" %>

<jsp:useBean class="model.DAOContato" id="d" scope="page"></jsp:useBean>

<%
//    DAOContato d = new DAOContato();  A LINHA ACIMA FAZ ISSO AQ | <% AQ TEM CODIGO JAVA %>
%>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>JSP Page</title>
    </head>
    <body>
        <h2>Contatos</h2>
        <table border="1">
            <thead>
                <tr>
                    <th>Excluir</th>
                    <th>Alterar</th>
                    <th>NOME</th>
                    <th>EMAIL</th>
                    <th>TELEFONE</th>


                </tr>
            </thead>
            <body>
                <%
                    ArrayList<Contato> ac = d.pesquisar("SELECT * FROM public.contato");
                    for(Contato c: ac){ //for automatico
                %>
            <tr>
                <td></td>
                <td></td>
                <td><%=c.getNome()%></td>
                <td><%=c.getEmail()%></td>
                <td><%=c.getTelefone()%></td>                
            </tr>
            <%
                } 
            %>
            
            </body>
        </table>
    </body>
</html>
