<%-- 
    Document   : cadImovel
    Created on : 1 de set. de 2021, 11:57:39
    Author     : eport
--%>

<%@page contentType="text/html" pageEncoding="UTF-8"%>
<!DOCTYPE html>
<html>
    <head>
        <meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
        <title>Cadastro - Imóvel</title>
    </head>
    <body>
        <h1>Cadastro de Imóveis</h1>
        <form action="/SistemaParaImobiliaria/CtrlImovel" method="POST">
            Endereço: <input type="text" name="endereco" value="" /> <br>
            Tipo: <input type="text" name="tipo" value="" /> <br>
            Pronto: <input type="text" name="pronto" value="" /> <br>        
            Quartos: <input type="text" name="quartos" value="" /> <br>
            Garagem: <input type="text" name="garagem" value="" /> <br>
            Tamanho: <input type="text" name="tamanho" value="" /> <br>
            Aluguel: <input type="text" name="aluguel" value="" /> <br>        
            Preço: <input type="text" name="preco" value="" /> <br>
            <input type="submit" value="Cadastrar"/>
        </form>
        
    </body>
</html>
