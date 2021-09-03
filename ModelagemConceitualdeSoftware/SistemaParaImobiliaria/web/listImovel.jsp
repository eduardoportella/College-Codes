<%-- 
    Document   : listImovel
    Created on : 2 de set. de 2021, 21:36:27
    Author     : eport
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<%@page import="java.util.ArrayList"%>
<%@page import="model.*"%>

<jsp:useBean class="model.DAOImovel" id="d" scope="page"></jsp:useBean>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Imóvel - Listagem</title>
    </head>
    <body>
        <h1>Imóveis</h1>
        <table border="1">
            <thead>
                <tr>
                    <th>Excluir</th>
                    <th>Alterar</th>
                    <th>ENDEREÇO</th>
                    <th>TIPO</th>
                    <th>PRONTO</th>
                    <th>QUARTOS</th>
                    <th>GARAGEM</th>
                    <th>TAMANHO</th>
                    <th>ALUGUEL</th>
                    <th>PREÇO</th>
                </tr>
            </thead>
            <tbody>
            <%
                ArrayList<Imovel> ac = d.pesquisar("SELECT * FROM public.imovel");
                for(Imovel i: ac)
                {
            %>
                <tr>
                    <td></td>
                    <td></td>
                    <td><%=i.getEndereco() %></td>
                    <td><%=i.getTipo()%></td>
                    <td><%=i.getPronto()%></td>
                    <td><%=i.getQuartos()%></td>
                    <td><%=i.getGaragem()%></td>
                    <td><%=i.getTamanho()%></td>
                    <td><%=i.getAluguel()%></td>
                    <td><%=i.getPreco()%></td>
                </tr>
            <% }
            %>
            </tbody>
        </table>
    </body>
</html>
