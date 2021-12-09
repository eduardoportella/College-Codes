<?php

require_once 'Aluno.php';

class Bolsista extends Aluno{
    private $bolsa;
    
    public function renovarBolsa(){
        echo "<p>Bolsa renovada</p>";
    }

    public function pagarMensalidade(){
        echo "<p>$this->nome é bolsista! Então paga com desconto!</p>";
    }
    

    /**
     * Get the value of bolsa
     */ 
    public function getBolsa()
    {
        return $this->bolsa;
    }

    /**
     * Set the value of bolsa
     *
     * @return  self
     */ 
    public function setBolsa($bolsa)
    {
        $this->bolsa = $bolsa;

        return $this;
    }
}