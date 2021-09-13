<%-- 
    Document   : alterarCliente
    Created on : Set 10, 2021, 9:29:16 PM
    Author     : Admin Smart
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" import="model.Cliente"%>
<jsp:useBean class="model.DAOCliente" id="d" scope="page"></jsp:useBean>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Cliente - Editar</title>
    </head>
    <%
        String idCliente = request.getParameter("idCliente");
        
        Cliente c = d.getById(idCliente);
    
    %>
    <body>
        <h3>Editar Cliente</h3>
        <form action="/SistemaParaImobiliaria/CtrlCliente" method="POST">
            Nome: <input type="text" name="nome" value="<%=c.getNome() %>" /><br>
            Telefone: <input type="text" name="telefone" value="<%=c.getTelefone() %>" /><br>
            Email: <input type="text" name="email" value="<%=c.getEmail() %>" /><br>
            Endereço: <input type="text" name="endereco" value="<%=c.getEndereco() %>" /><br>
            
            <input type="hidden" name="ACAO" value="ALTERAR" /><br>
            <input type="hidden" name="cod_cliente" value="<%=c.getCod_cliente()%>" /><br>
            
            <input type="submit" value="Alterar" />
        </form>
    </body>
</html>
