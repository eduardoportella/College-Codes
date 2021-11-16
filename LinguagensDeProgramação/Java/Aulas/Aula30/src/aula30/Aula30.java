/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package aula30;

/**
 *
 * @author eport
 */
public class Aula30 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Video v[] = new Video[3];
        v[0] = new Video("Aula 29 de POO");
        v[1] = new Video("Aula 12 de PHP");
        v[2] = new Video("Aula 10 de HTML5");
        
        Gafanhoto g[] = new Gafanhoto[2];
        g[0] = new Gafanhoto("Eduardo", 20, "M", "ehopai");
        g[1] = new Gafanhoto("Creuza", 12, "F", "creuzita");
        
        
        Visualizacao vis[] = new Visualizacao[5];
        vis[0] = new Visualizacao(g[0], v[2]); //Eduardo assiste HTML5
        vis[0].avaliar();
        System.out.println(vis[0].toString());
        vis[1] = new Visualizacao(g[0], v[1]); //Eduardo assiste PHP
        vis[1].avaliar(87.0f);
        System.out.println(vis[1].toString());
        
//        System.out.println(g[0].toString());
    }
    
}
