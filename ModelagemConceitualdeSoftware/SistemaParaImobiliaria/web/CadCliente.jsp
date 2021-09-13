<%-- 
    Document   : cadContato
    Created on : Sep 10, 2021, 11:49:18 AM
    Author     : Jefferson
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Cliente - Cadastro</title>
    </head>
    <body>
        <h1>Cadastro de Cliente</h1>
        <form action="/SistemaParaImobiliaria/CtrlCliente" method="POST">
            Nome: <input type="text" name="nome" value="" /><br>
            Telefone: <input type="text" name="telefone" value="" /><br>
            Email: <input type="text" name="email" value="" /><br>
            Endereço: <input type="text" name="endereco" value="" /><br>
            
            <input type="hidden" name="ACAO" value="INSERIR" /><br>
            <input type="submit" value="Cadastrar" />
        </form>          
        <%
            String idCliente = request.getParameter("idCliente");
            
            if(idCliente!=null)
                out.println("Cliente inserido com sucesso! ID = "+idCliente);
        %>
    </body>
</html>
