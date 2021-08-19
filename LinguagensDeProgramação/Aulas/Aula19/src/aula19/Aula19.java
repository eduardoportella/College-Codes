package aula19;

public class Aula19 {
    public static void main(String[] args) {
        Caneta c1 = new Caneta("NIC", "Amarelo", 0.4f);
        Caneta c2 = new Caneta("Stabilo", "Verde", 0.3f);
////        c1.setModelo("BIC");
//        c1.modelo = ("BIC"); //funciona porque eh publico
//        c1.setPonta(0.5f);
////        c1.ponta = 0.5f; //nao funciona porque eh privado
        c1.status();
        c2.status();

    }
}
