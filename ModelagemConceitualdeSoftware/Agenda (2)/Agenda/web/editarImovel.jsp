<%-- 
    Document   : editarImovel
    Created on : Sep 6, 2021, 8:21:57 PM
    Author     : padil
--%>

<%@page contentType="text/html" pageEncoding="UTF-8" import="model.Imovel"%>
<jsp:useBean class="model.DAOImovel" id="d" scope="page"></jsp:useBean>

<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Imóvel- Alterar </title>
    </head>
    <%
        String idImovel = request.getParameter("idImovel");
            
        if (idImovel != null)
            out.println("Imóvel alterado com sucesso! ID: "+idImovel);
            
        Imovel i = d.getById(idImovel);
    
    %>
    <body>
        <h3>Editar Imóvel</h3>
        <form action="/SistemaParaImobiliaria/CtrlImóvel" method="POST">
            Endereço: <input type="text" name="endereco" value="" /> <br>
            Tipo: <input type="text" name="tipo" value="" /> <br>
            Pronto: <input type="text" name="pronto" value="" /> <br>        
            Quartos: <input type="text" name="quartos" value="" /> <br>
            Garagem: <input type="text" name="garagem" value="" /> <br>
            Tamanho: <input type="text" name="tamanho" value="" /> <br>
            Aluguel: <input type="text" name="aluguel" value="" /> <br>        
            Preço: <input type="text" name="preco" value="" /> <br>
            <input type="hidden" name="ACAO" value="ALTERAR" /><br>
            <input type="hidden" name="cod" value="<%=i.getCod_imovel()%>" /><br>
            
            <input type="submit" value="Alterar"/>
        </form>
    </body>
</html>