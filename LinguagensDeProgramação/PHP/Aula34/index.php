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
        require_once 'Caneta.php';
        
        $c1 = new Caneta("Bic", "Azul", 0.5);
        $c2 = new Caneta("Stabilo", "Verde", 1.0);

        print_r($c1);
        print_r($c2);
        ?>
    </pre>
</body>
</html>