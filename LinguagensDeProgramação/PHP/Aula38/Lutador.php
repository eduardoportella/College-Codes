<?php


class Lutador{
    private $nome;
    private $nacionalidade;
    private $idade, $altura, $peso;
    private $categoria, $vitorias, $derrotas, $empates;

    function apresentar(){
        echo "<p>--------------------------</p>";
        echo "<p>CHEGOU A HORA! O lutador " . $this->getNome();
        echo " veio diretamente de " . $this->getNacionalidade();
        echo ", tem " . $this->getIdade() . " anos e pesa " . $this->getPeso() . "Kg";
        echo "<br> Ele tem " . $this->getVitorias() . " vitórias, ";
        echo $this->getDerrotas() . " derrotas e " . $this->getEmpates() . " empates </p>";


    }

    function status(){
        echo "<p>--------------------------</p>";
        echo "<p>" . $this->getNome() . " é um peso " . $this->getPeso();
        echo " e já ganhou " . $this->getVitorias() . " vezes,";
        echo " perdeu " . $this->getDerrotas() . " vezes e";
        echo " empatou " . $this->getEmpates() . "</p>";
    }

    function ganharLuta(){
        $this->setVitorias($this->getVitorias() + 1);

    }

    function perderLuta(){
        $this->setDerrotas($this->getDerrotas() + 1);

    }

    function empatarLuta(){
        $this->setEmpates($this->getEmpates() + 1);

    }

    function __construct($no, $na, $id, $al, $pe, $vi, $de, $em){
        $this->nome = $no;
        $this->nacionalidade = $na;
        $this->idade = $id;
        $this->altura = $al;
        $this->setPeso($pe);
        $this->vitorias = $vi;
        $this->derrotas = $de;
        $this->empates = $em;
    }

    

    /**
     * Get the value of nome
     */ 
    public function getNome()
    {
        return $this->nome;
    }

    /**
     * Set the value of nome
     *
     * @return  self
     */ 
    public function setNome($nome)
    {
        $this->nome = $nome;

        return $this;
    }

    /**
     * Get the value of nacionalidade
     */ 
    public function getNacionalidade()
    {
        return $this->nacionalidade;
    }

    /**
     * Set the value of nacionalidade
     *
     * @return  self
     */ 
    public function setNacionalidade($nacionalidade)
    {
        $this->nacionalidade = $nacionalidade;

        return $this;
    }

    /**
     * Get the value of idade
     */ 
    public function getIdade()
    {
        return $this->idade;
    }

    /**
     * Set the value of idade
     *
     * @return  self
     */ 
    public function setIdade($idade)
    {
        $this->idade = $idade;

        return $this;
    }

    /**
     * Get the value of altura
     */ 
    public function getAltura()
    {
        return $this->altura;
    }

    /**
     * Set the value of altura
     *
     * @return  self
     */ 
    public function setAltura($altura)
    {
        $this->altura = $altura;

        return $this;
    }

    /**
     * Get the value of peso
     */ 
    public function getPeso()
    {
        return $this->peso;
    }

    /**
     * Set the value of peso
     *
     * @return  self
     */ 
    public function setPeso($peso)
    {
        $this->peso = $peso;
        $this->setCategoria();

        return $this;
    }

    /**
     * Get the value of categoria
     */ 
    public function getCategoria()
    {
        return $this->categoria;
    }

    /**
     * Set the value of categoria
     *
     * @return  self
     */ 
    private function setCategoria()
    {
        if ($this->peso < 52.2){
            $this->categoria = "Inválido";
        } elseif ($this->peso <= 70.3){
            $this->categoria = "Leve";
        } elseif ($this->peso <= 83.9){
            $this->categoria = "Médio";
        } elseif ($this->peso <= 120.2){
            $this->categoria = "Pesado";
        } else {
            $this->categoria = "Inválido";
        }
    }

    /**
     * Get the value of vitorias
     */ 
    public function getVitorias()
    {
        return $this->vitorias;
    }

    /**
     * Set the value of vitorias
     *
     * @return  self
     */ 
    public function setVitorias($vitorias)
    {
        $this->vitorias = $vitorias;

        return $this;
    }

    /**
     * Get the value of derrotas
     */ 
    public function getDerrotas()
    {
        return $this->derrotas;
    }

    /**
     * Set the value of derrotas
     *
     * @return  self
     */ 
    public function setDerrotas($derrotas)
    {
        $this->derrotas = $derrotas;

        return $this;
    }

    /**
     * Get the value of empates
     */ 
    public function getEmpates()
    {
        return $this->empates;
    }

    /**
     * Set the value of empates
     *
     * @return  self
     */ 
    public function setEmpates($empates)
    {
        $this->empates = $empates;

        return $this;
    }
}
