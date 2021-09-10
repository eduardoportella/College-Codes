<%-- 
    Document   : cadContato
    Created on : Sep 4, 2021, 11:49:18 AM
    Author     : padil
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Cadastro</title>
    </head>
    <body>
        <h1>Cadastro de Imovel</h1>
        <form action="/agenda/CrtlImovel" method="POST">
            Nome: <input type="text" name="nome" value="" /><br>
            E-mail: <input type="text" name="nome" value="" /><br>
            Telefone: <input type="text" name="nome" value="" /><br>
            <input type="hidden" name="ACAO" value="INSERIR" /><br>
            <input type="submit" value="cadastrar" />
        </form>
        
        
        <%
            String id = request.getParameter("id");
            if( id!=null)
                out.println("Contato inserido com sucesso! ID = "+id);
        %>
    </body>
</html>
