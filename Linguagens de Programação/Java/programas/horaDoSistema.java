import java.util.*;
import java.awt.*;
public class horaDoSistema{
    public static void main(String[] args){
        Date relogio = new Date();
        System.out.println("A hora do sistema é");
        System.out.println(relogio.toString());

        Locale loc = Locale.getDefault();
        System.out.println("A linguagem do seu sistema é");
        System.out.println(loc.getDisplayLanguage());

        Toolkit tk = Toolkit.getDefaultToolkit();
        Dimension d = tk.getScreenSize();
        System.out.println("A resolução do seu sistema é: " + d.width + " X " + d.height);
    }
}
