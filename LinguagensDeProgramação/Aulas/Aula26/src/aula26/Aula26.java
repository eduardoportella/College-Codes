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
public class Aula26 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
//        Pessoa p1 = new Pessoa();
//        Visitante v1 = new Visitante();
//        v1.setNome("Juvenal");
//        v1.setIdade(22);
//        v1.setSexo("M");
//        System.out.println(v1.toString());
        
        Aluno a1 = new Aluno();
        a1.setNome("Eduardo");
        a1.setMatricula(1112);
        a1.setCurso("Engenharia de Software");
        a1.setIdade(19);
        a1.setSexo("M");
        a1.pagarMensalidade();
        
        Bolsista b1 = new Bolsista();
        b1.setNome("Jubileu");
        b1.setBolsa(12.5f);
        b1.setSexo("M");
        b1.pagarMensalidade();
        
        Professor p1 = new Professor();
        p1.setNome("Bilo");
        p1.setEspecialidade("Linguagens de Programação");
        p1.setSexo("M");
        p1.setIdade(18);
        p1.setSalario(7000f);
        System.out.println(p1.toString());
        
        Tecnico t1 = new Tecnico();
        t1.setNome("Gustavo");
        t1.setIdade(25);
        t1.setMatricula(1234);
        t1.setCurso("Informática");
        t1.setSexo("M");
        t1.setRegistroProfissional(687);
        System.out.println(t1.toString());
        
    }
    
}
