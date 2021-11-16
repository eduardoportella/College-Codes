/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package figura;

/**
 *
 * @author eport
 */
public class Retangulo {
    private double largura;
    private double altura;
    
    public double area(){
        return largura * altura;
    }
    
    public double perimetro(){
        return (largura*2)+(altura*2);
    }
    
    public double diagonal(){
        return Math.sqrt(Math.pow(altura, 2) + Math.pow(largura, 2));
    }

    public double getLargura() {
        return largura;
    }

    public void setLargura(double largura) {
        this.largura = largura;
    }

    public double getAltura() {
        return altura;
    }

    public void setAltura(double altura) {
        this.altura = altura;
    }

   
}
