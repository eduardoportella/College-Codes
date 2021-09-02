<%-- 
    Document   : cadContato
    Created on : 16 de ago. de 2021, 20:49:29
    Author     : eport
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Agenda - Cadastro</title>
    </head>
    <body>
        <h3>Cadastro de Contatos</h3>
        <form action="/agenda2/SvContato" method="POST">
            Nome:<input type="text" name="nome" value="" \><br> 
            Email:<input type="text" name="email" value="" \><br>
            Telefone:<input type="text" name="telefone" value="" \><br>
            <input type="submit" value="Cadastrar"\>
        </form>
        
        <% 
            String id = request.getParameter("id");
            
            if (id != null)
                out.println("Contato inserido com sucesso! ID: "+id);
            
        %>
    </body>
</html>
