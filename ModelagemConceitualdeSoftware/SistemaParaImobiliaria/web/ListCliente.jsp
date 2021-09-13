<%-- 
    Document   : listarContato
    Created on : Set 10, 2021, 9:08:47 PM
    Author     : Admin Smart
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.ArrayList" %>
<%@page import="model.*" %>
<jsp:useBean class="model.DAOCliente" id="d" scope="page"></jsp:useBean>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Lista de Clientes</title>
    </head>
    <body>
        <h1>Clientes</h1>
        <table border="1">
            <thead>
                <tr>
                    <th>Excluir</th>
                    <th>Alterar</th>
                    <th>NOME</th>
                    <th>E-MAIL</th>
                    <th>TELEFONE</th>
                    <th>ENDEREÇO</th>                    
                </tr>
            </thead>
            <tbody>
            <%
                ArrayList<Cliente> ac = d.pesquisar("SELECT * FROM public.clientes");
                
                for(Cliente c: ac)
                {
            %>
                    <tr>
                        <td><a href="/SistemaParaImobiliaria/CtrlCliente?ACAO=EXCLUIR&idCliente=<%=c.getCod_cliente()%>">Excluir</a></td>
                        
                        <td><a href="AltCliente.jsp?idCliente=<%=c.getCod_cliente()%>">Editar</a></td>
                        <td><%=c.getNome() %></td>
                        <td><%=c.getEmail() %></td>
                        <td><%=c.getTelefone() %></td>
                        <td><%=c.getEndereco() %></td>
                    </tr>
                
            <%  }
            %>
                
            </tbody>
        </table>    
    </body>
</html>
