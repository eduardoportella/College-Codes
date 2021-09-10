<%-- 
    Document   : cadCoontato
    Created on : Aug 2, 2021, 9:27:35 PM
    Author     : ferrasa
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Agenda - Cadastro </title>
    </head>
    <body>
        <h3>Cadastro de Contatos</h3>
        <form action="/agenda/SvContato" method="POST">
            Nome:<input type="text" name="nome" value="" /><br>
            E-mail:<input type="text" name="email" value="" /><br>
            Telefone:<input type="text" name="telefone" value="" /><br>
            <input type="hidden" name="ACAO" value="INSERIR" /><br>
            <input type="submit" value="Cadastrar"/>
        </form>
        
        <% 
            String id = request.getParameter("id");
            
            if (id != null)
                out.println("Contato inserido com sucesso! ID: "+id);
            
        %>
    </body>
</html>
