<?php


class Tecnico extends Aluno{
    private $registroProfissional;
    
    public function praticar(){
        echo "<p>$this->nome está praticando</p>";
    }

    /**
     * Get the value of registroProfissional
     */ 
    public function getRegistroProfissional()
    {
        return $this->registroProfissional;
    }

    /**
     * Set the value of registroProfissional
     *
     * @return  self
     */ 
    public function setRegistroProfissional($registroProfissional)
    {
        $this->registroProfissional = $registroProfissional;

        return $this;
    }
}
