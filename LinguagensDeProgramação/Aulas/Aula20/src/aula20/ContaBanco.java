package aula20;
public class ContaBanco {
    //atributos
    public int numConta;
    protected String tipo;
    private String dono;
    private float saldo;
    private boolean status;
    
    //metodos personalizados
    
    public void estadoAtual(){
        System.out.println("----------------------------");
        System.out.println("Conta: " + this.getNumConta());
        System.out.println("Tipo: " + this.getTipo());
        System.out.println("Dono:" + this.getDono());
        System.out.println("Saldo: " + this.getSaldo());
        System.out.println("Status: " + this.getStatus());
    }
    
    public void abrirConta(String t){
        this.setTipo(t);
        this.setStatus(true);
        if (t == "CC") {
            this.setSaldo(50);
        } else if(t=="CP") {
            this.setSaldo(150);
        }
    }
    
    public void fecharConta(){
        if (this.getSaldo()>0){
            System.out.println("Conta não pode ser fechada porque ainda tem dinheiro");
        } else if (this.getSaldo() < 0){
            System.out.println("Conta não pode ser fechada porque tem débito");
        } else {
            this.setStatus(false);
            System.out.println("Conta fechada com sucesso!");
        }
    }
    
    public void depositar(float v){
        if (this.getStatus()){
            this.setSaldo(this.getSaldo() + v);
            System.out.println("Depósito realizado com sucesso na conta de " + getDono());
        } else {
            System.out.println("Impossível depositar em conta fechada!");
        }
    }
    
    public void sacar(float v){
        if (this.getStatus()){
            if (this.getSaldo() >= v){
                this.setSaldo(this.getSaldo() - v);
                System.out.println("Saque realizado na conta de " + getDono());
            } else {
                System.out.println("Saldo insuficiente para saque");
            }
        } else{
            System.out.println("Impossível depositar em conta fechada!");
        }
    }
    
    public void pagarMensal(){
        int v=0;
        if (this.getTipo() == "CC") {
            v = 12;
        } else if (this.getTipo() == "CP") {
            v = 20;
        }
        if (this.getStatus()){
            this.setSaldo(this.getSaldo()- v);
            System.out.println("Mensalidade paga com sucesso por " + getDono());
        } else {
            System.out.println("Impossível pagar uma conta fechada!");

        }
    }
    
    //metodos especiais
    public void ContaBanco(){
        this.saldo = 0;
        this.status = false;
        
    }
    
//    public void setNumConta(int n){
//        this.numConta = n;
//    }
//    
//    public int getNumConta(){
//        return this.numConta;
//    }
//    
//    public String getDono(){
//        return this.dono;
//    }

    public int getNumConta() {
        return numConta;
    }

    public void setNumConta(int numConta) {
        this.numConta = numConta;
    }

    public String getTipo() {
        return tipo;
    }

    public void setTipo(String tipo) {
        this.tipo = tipo;
    }

    public String getDono() {
        return dono;
    }

    public void setDono(String dono) {
        this.dono = dono;
    }

    public float getSaldo() {
        return saldo;
    }

    public void setSaldo(float saldo) {
        this.saldo = saldo;
    }

    public boolean getStatus() {
        return status;
    }

    public void setStatus(boolean status) {
        this.status = status;
    }
    
}
