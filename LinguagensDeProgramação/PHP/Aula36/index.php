<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <h1>Projeto controle remoto</h1>
    <pre>
        <?php
        require_once 'ControleRemoto.php';
            $c = new ControleRemoto();
            $c->ligar();
            $c->maisVolume();
            $c->setLigado(false);
            $c->maisVolume();
            $c->abrirMenu();
            $c->fecharMenu();
        ?>
    </pre>
    
</body>
</html>