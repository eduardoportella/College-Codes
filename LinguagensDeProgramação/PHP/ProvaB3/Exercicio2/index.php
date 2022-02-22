<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title></title>
</head>
<body>
    <pre>
        <?php
        require_once 'Video.php';
        require_once 'Gafanhoto.php';
        require_once 'Visualizacao.php';

        $v[0] = new Video("Aula 1 de POO");
        $v[1] = new Video("Aula 2 de POO");
        $v[2] = new Video("Aula 3 de POO");

        $g[0] = new Gafanhoto("Eduardo", 19, "M", "eduu");
        $g[1] = new Gafanhoto("Creuza", 12, "F", "creuzitaa");

        $vis[0] = new Visualizacao($g[0], $v[2]);
        $vis[1] = new Visualizacao($g[0], $v[1]);

        $vis[0]->avaliar();
        $vis[1]->avaliarPorc(85);
        
        print_r($vis);

        ?>
    </pre>
</body>
</html>