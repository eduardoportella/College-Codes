/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Main.java to edit this template
 */
package estoque;
import java.util.Scanner;
/**
 *
 * @author eport
 */
public class Estoque {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner scanner = new Scanner(System.in);
        
        
        System.out.println("Coloque os dados do produto:");
        System.out.print("Nome: ");
        String nome = scanner.nextLine();
        System.out.print("Preço: ");
        Double preco = Double.parseDouble(scanner.nextLine());
        System.out.print("Quantidade: ");
        int quantidade = scanner.nextInt();
        
        Produto produto = new Produto();
        produto.setNome(nome);
        produto.setPreco(preco);
        produto.setQuantidade(quantidade);
        
        System.out.println(produto.toString());
        
        System.out.print("Digite a quantidade de produtos para serem adicionados ao estoque: ");
        int itens = scanner.nextInt();
        produto.addProdutos(itens);
        System.out.println(produto.toString(true));

        
        System.out.print("Digite a quantidade de produtos para serem removidos do estoque: ");
        itens = scanner.nextInt();
        produto.removeProdutos(itens);
        System.out.println(produto.toString(true));

    }
    
}
