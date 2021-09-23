/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package aula26;

/**
 *
 * @author eport
 */
public class Tecnico extends Aluno{
    private int registroProfissional;
    
    public void praticar(){
        System.out.println("O técnico " + this.nome + " está praticando!");
    }

    public int getRegistroProfissional() {
        return registroProfissional;
    }

    public void setRegistroProfissional(int registroProfissional) {
        this.registroProfissional = registroProfissional;
    }
    
    
    
}
