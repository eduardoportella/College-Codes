/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Model;

/**
 *
 * @author eport
 */
public class Medida {

    private String descricaoDe;
    private String siglaDe;
    private String descricaoPara;
    private String siglaPara;
    private double fator;

    public Medida(String descricaoDe, String siglaDe, String descricaoPara, String siglaPara, double fator) {
        this.descricaoDe = descricaoDe;
        this.siglaDe = siglaDe;
        this.descricaoPara = descricaoPara;
        this.siglaPara = siglaPara;
        setFator(fator);
    }

    public String getDescricaoDe() {
        return descricaoDe;
    }

    public void setDescricaoDe(String descricaoDe) {
        this.descricaoDe = descricaoDe;
    }

    public String getSiglaDe() {
        return siglaDe;
    }

    public void setSiglaDe(String siglaDe) {
        this.siglaDe = siglaDe;
    }

    public String getDescricaoPara() {
        return descricaoPara;
    }

    public void setDescricaoPara(String descricaoPara) {
        this.descricaoPara = descricaoPara;
    }

    public String getSiglaPara() {
        return siglaPara;
    }

    public void setSiglaPara(String siglaPara) {
        this.siglaPara = siglaPara;
    }

    public double getFator() {
        return fator;
    }

    public void setFator(double fator) {
        if (fator > 0) {
            this.fator = fator;
        } else {
            this.fator = 1;
        }
    }
    
    @Override
    public String toString(){
        return descricaoDe + " - " + descricaoPara;
    }
    
 
}
