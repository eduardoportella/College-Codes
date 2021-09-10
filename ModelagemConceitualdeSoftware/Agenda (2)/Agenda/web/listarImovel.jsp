<%-- 
    Document   : listarContato
    Created on : Sep 7, 2021, 10:44:31 AM
    Author     : padil
--%>

<%@page import="model.Imovel"%>
<%@page import="java.util.ArrayList"%>
<%@page contentType="text/html" pageEncoding="UTF-8"%>
<jsp:useBean class="model.DAOImovel" id="d" scope="page"></jsp:useBean>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Lista de Imoveis</title>
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
                    <td><a href="/agenda/CrtlImovel?ACAO=EXCLUIR&id=<%=i.getCod_imovel()%>">X</td>
                    <td><a href="editarImovel.jsp?id=<%=i.getCod_imovel()%>">Editar</a></td>
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
