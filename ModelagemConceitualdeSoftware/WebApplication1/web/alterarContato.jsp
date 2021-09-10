<%-- 
    Document   : alterarContato
    Created on : Aug 23, 2021, 9:29:16 PM
    Author     : ferrasa
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" import="model.Contato"%>
<jsp:useBean class="model.DAOContato" id="d" scope="page"></jsp:useBean>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Agenda - Editar</title>
    </head>
    <%
        String id = request.getParameter("id");
        
        Contato c = d.getById(id);
    
    %>
    <body>
        <h3>Editar Contato</h3>
        <form action="/agenda2/SvContato" method="POST">
            Nome:<input type="text" name="nome" value="<%=c.getNome() %>" /><br>
            E-mail:<input type="text" name="email" value="<%=c.getEmail() %>" /><br>
            Telefone:<input type="text" name="telefone" value="<%=c.getTelefone() %>" /><br>
            <input type="hidden" name="ACAO" value="ALTERAR" /><br>
            <input type="hidden" name="cod" value="<%=c.getCod_contato()  %>" /><br>
            
            <input type="submit" value="Alterar"/>
        </form>
    </body>
</html>
