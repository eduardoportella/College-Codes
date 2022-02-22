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

        $v[0] = new Video("Aula 1 de POO");
        $v[1] = new Video("Aula 2 de POO");
        $v[2] = new Video("Aula 3 de POO");

        $g[0] = new Gafanhoto("Eduardo", 19, "M", "eduu");
        $g[1] = new Gafanhoto("Creuza", 12, "F", "creuzitaa");

        print_r($v);
        print_r($g);

        ?>
    </pre>
</body>
</html>