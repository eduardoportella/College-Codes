/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Random;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.DefaultListModel;
import javax.swing.JFileChooser;
import javax.swing.table.DefaultTableModel;
import javax.swing.table.TableRowSorter;

/**
 *
 * @author eport
 */
public class brasileirao2021 extends javax.swing.JFrame {
    DefaultListModel lista = new DefaultListModel();
    DefaultTableModel tableJogosObjeto = new DefaultTableModel();
    DefaultTableModel tableResultadoObjeto = new DefaultTableModel();

    /**
     * Creates new form brasileirao2021
     */
    public brasileirao2021() {
        initComponents();
        painel.setVisible(false);
        criaLista();
        btnSalvar.setEnabled(false);
        tableResultado.setRowSorter(new TableRowSorter(tableResultadoObjeto));
        tableJogos.setRowSorter(new TableRowSorter(tableJogosObjeto));
        tableJogos.getTableHeader().setReorderingAllowed(false);
        tableResultado.getTableHeader().setReorderingAllowed(false);
    }
    
    public void criaLista(){
        lista.addElement("América-MG");
        lista.addElement("Athletico-PR");
        lista.addElement("Atlético-GO");
        lista.addElement("Atlético-MG");
        lista.addElement("Bahia");
        lista.addElement("Bragantino");
        lista.addElement("Ceará");
        lista.addElement("Chapecoense");
        lista.addElement("Corinthians");
        lista.addElement("Cuiabá");
        lista.addElement("Fortaleza");
        lista.addElement("Flamengo");
        lista.addElement("Fluminense");
        lista.addElement("Grêmio");
        lista.addElement("Internacional");
        lista.addElement("Juventude");
        lista.addElement("Palmeiras");
        lista.addElement("Santos");
        lista.addElement("São Paulo");
        lista.addElement("Sport");
        listaTimes.setModel(lista);
    }
    
    public void criaTable1(){
        tableJogosObjeto.addColumn("Local");
        tableJogosObjeto.addColumn(" ");
        tableJogosObjeto.addColumn("x");
        tableJogosObjeto.addColumn(" ");
        tableJogosObjeto.addColumn("Visitante");
        
        tableJogos.setModel(tableJogosObjeto);
    }
    
    public void criaTable2(){
        tableResultadoObjeto.addColumn("Time");
        tableResultadoObjeto.addColumn("P");
        tableResultadoObjeto.addColumn("V");
        tableResultadoObjeto.addColumn("E");
        tableResultadoObjeto.addColumn("D");
        tableResultadoObjeto.addColumn("GP");
        tableResultadoObjeto.addColumn("GN");
        tableResultadoObjeto.addColumn("SG");
        
        tableResultado.setModel(tableResultadoObjeto);
    }
    
    public void organizar(){
        int tam = lista.getSize();
        int vetorA[] = new int[7];
        int vetorB[] = new int[7];
        int vetorAux[] = new int[7];
        String nomeA, nomeB, nomeAux;
        
        for (int i=0;i<tam;i++){
            nomeA = tableResultadoObjeto.getValueAt(i, 0).toString();
            for (int j=0; j<7; j++){
                vetorA[j] = (int) tableResultadoObjeto.getValueAt(i, j+1);
            }
            for (int k=0; k<tam; k++){
                nomeB = tableResultadoObjeto.getValueAt(k, 0).toString();
                    for (int l=0; l<7; l++){
                        vetorB[l] = (int) tableResultadoObjeto.getValueAt(k, l+1);
                    }
                    if (i!=k){
                        if (vetorA[0] > vetorB[0]){
                            vetorAux = vetorA;
                            vetorA = vetorB;
                            vetorB = vetorAux;
                            nomeAux = nomeA;
                            nomeA = nomeB;
                            nomeB = nomeAux;
                        }
                    }
                    for (int m=0; m<7; m++){
                        tableResultadoObjeto.setValueAt(vetorB[m], k, m+1);   
                    }
                    tableResultadoObjeto.setValueAt(nomeB, k, 0);
                }
            for (int m=0; m<7; m++){
                tableResultadoObjeto.setValueAt(vetorA[m], i, m+1);
            }
            tableResultadoObjeto.setValueAt(nomeA, i, 0);
        }
    }
    
    public void jogar(){
        int tam = lista.getSize();
        int vetorA[] = new int[7];
        int vetorB[] = new int[7];
        String nomeA, nomeB;
        Random aleatorio = new Random();
        for (int i=0; i<lista.getSize(); i++){
            tableResultadoObjeto.addRow(new Object[]{
                    lista.getElementAt(i), 0, 0, 0, 0,
                    0, 0, 0
            });
        }
        
        for (int i=0; i<tam; i++){
            for (int j=0; j<7; j++){
                vetorA[j] = (int) tableResultadoObjeto.getValueAt(i, j+1);
            }
            
            for (int j=0; j<tam; j++){
                for (int k=0; k<7; k++){
                    vetorB[k] = (int) tableResultadoObjeto.getValueAt(j, k+1);
                }
                
                if (i!=j){
                    int gol1 = aleatorio.nextInt(6);
                    int gol2 = aleatorio.nextInt(6);
                    tableJogosObjeto.addRow(new Object[]{
                    lista.getElementAt(i), gol1,
                    "x", gol2, lista.getElementAt(j)
                    });
                    
                    if(gol1>gol2){
                        vetorA[1]++;
                        vetorB[3]++;
                        vetorA[0]+=3;
                    } else if (gol1==gol2){
                        vetorA[2]++;
                        vetorA[0]++;
                        vetorB[2]++;
                        vetorB[0]++;
                    } else {
                        vetorA[3]++;
                        vetorB[1]++;
                        vetorB[0]+=3;
                    }
                    vetorA[4]+=gol1;
                    vetorA[5]+=gol2;
                    vetorB[4]+=gol2;
                    vetorB[5]+=gol1;
                    
                }
                vetorB[6]=vetorB[4]-vetorB[5];
                for (int m=0; m<7; m++){
                        tableResultadoObjeto.setValueAt(vetorB[m], j, m+1);   
                }
                
            } //for j
            vetorA[6]=vetorA[4]-vetorA[5];
            for (int m=0; m<7; m++){
                tableResultadoObjeto.setValueAt(vetorA[m], i, m+1);   
            }
        } //for i
        
        tableJogos.setModel(tableJogosObjeto);
        tableResultado.setModel(tableResultadoObjeto);
        tableResultado.setAutoCreateRowSorter(true);
        organizar();
    }

    /**
     * This method is called from within the constructor to initialize the form.
     * WARNING: Do NOT modify this code. The content of this method is always
     * regenerated by the Form Editor.
     */
    @SuppressWarnings("unchecked")
    // <editor-fold defaultstate="collapsed" desc="Generated Code">//GEN-BEGIN:initComponents
    private void initComponents() {

        jScrollPane2 = new javax.swing.JScrollPane();
        jTable1 = new javax.swing.JTable();
        jPanel1 = new javax.swing.JPanel();
        jScrollPane1 = new javax.swing.JScrollPane();
        listaTimes = new javax.swing.JList<>();
        jLabel1 = new javax.swing.JLabel();
        btnGerar = new javax.swing.JButton();
        btnSalvar = new javax.swing.JButton();
        btnLimpar = new javax.swing.JButton();
        painel = new javax.swing.JPanel();
        jScrollPane4 = new javax.swing.JScrollPane();
        tableJogos = new javax.swing.JTable();
        jScrollPane6 = new javax.swing.JScrollPane();
        tableResultado = new javax.swing.JTable();

        jTable1.setModel(new javax.swing.table.DefaultTableModel(
            new Object [][] {
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null},
                {null, null, null, null}
            },
            new String [] {
                "Title 1", "Title 2", "Title 3", "Title 4"
            }
        ));
        jScrollPane2.setViewportView(jTable1);

        setDefaultCloseOperation(javax.swing.WindowConstants.EXIT_ON_CLOSE);
        setResizable(false);

        jScrollPane1.setAutoscrolls(true);

        listaTimes.setToolTipText("");
        jScrollPane1.setViewportView(listaTimes);

        jLabel1.setText("Times");
        jLabel1.setAutoscrolls(true);

        btnGerar.setText("Gerar");
        btnGerar.setAutoscrolls(true);
        btnGerar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnGerarActionPerformed(evt);
            }
        });

        btnSalvar.setText("Salvar");
        btnSalvar.setAutoscrolls(true);
        btnSalvar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnSalvarActionPerformed(evt);
            }
        });

        btnLimpar.setText("Limpar");
        btnLimpar.setAutoscrolls(true);
        btnLimpar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnLimparActionPerformed(evt);
            }
        });

        tableJogos.setModel(tableJogosObjeto);
        jScrollPane4.setViewportView(tableJogos);
        if (tableJogos.getColumnModel().getColumnCount() > 0) {
            tableJogos.getColumnModel().getColumn(0).setResizable(false);
        }

        tableResultado.setModel(tableResultadoObjeto);
        jScrollPane6.setViewportView(tableResultado);

        javax.swing.GroupLayout painelLayout = new javax.swing.GroupLayout(painel);
        painel.setLayout(painelLayout);
        painelLayout.setHorizontalGroup(
            painelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(painelLayout.createSequentialGroup()
                .addGroup(painelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addComponent(jScrollPane4, javax.swing.GroupLayout.PREFERRED_SIZE, 856, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addComponent(jScrollPane6, javax.swing.GroupLayout.PREFERRED_SIZE, 856, javax.swing.GroupLayout.PREFERRED_SIZE))
                .addGap(0, 20, Short.MAX_VALUE))
        );
        painelLayout.setVerticalGroup(
            painelLayout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(painelLayout.createSequentialGroup()
                .addComponent(jScrollPane4, javax.swing.GroupLayout.PREFERRED_SIZE, 193, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addComponent(jScrollPane6, javax.swing.GroupLayout.DEFAULT_SIZE, 294, Short.MAX_VALUE))
        );

        javax.swing.GroupLayout jPanel1Layout = new javax.swing.GroupLayout(jPanel1);
        jPanel1.setLayout(jPanel1Layout);
        jPanel1Layout.setHorizontalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(40, 40, 40)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addGroup(jPanel1Layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(jLabel1))
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.DEFAULT_SIZE, 114, Short.MAX_VALUE)
                    .addComponent(btnGerar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnSalvar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                    .addComponent(btnLimpar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
                .addGap(18, 18, 18)
                .addComponent(painel, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE))
        );
        jPanel1Layout.setVerticalGroup(
            jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(jPanel1Layout.createSequentialGroup()
                .addGap(0, 0, Short.MAX_VALUE)
                .addGroup(jPanel1Layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, jPanel1Layout.createSequentialGroup()
                        .addComponent(jLabel1)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 414, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(1, 1, 1)
                        .addComponent(btnGerar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnSalvar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnLimpar)
                        .addGap(5, 5, 5))
                    .addComponent(painel, javax.swing.GroupLayout.Alignment.TRAILING, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)))
        );

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addComponent(jPanel1, javax.swing.GroupLayout.PREFERRED_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.PREFERRED_SIZE)
                .addContainerGap(40, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(javax.swing.GroupLayout.Alignment.TRAILING, layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jPanel1, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnGerarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnGerarActionPerformed
        // TODO add your handling code here:
        criaTable1();
        criaTable2();
        jogar();
        btnGerar.setEnabled(false);
        btnSalvar.setEnabled(true);
        painel.setVisible(true);
    }//GEN-LAST:event_btnGerarActionPerformed

    private void btnLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLimparActionPerformed
        // TODO add your handling code here:
        tableJogosObjeto = new DefaultTableModel();
        tableResultadoObjeto = new DefaultTableModel();
        tableJogos.setModel(tableJogosObjeto);
        tableResultado.setModel(tableResultadoObjeto);
        tableResultado.setRowSorter(new TableRowSorter(tableResultadoObjeto));
        painel.setVisible(false);
        btnGerar.setEnabled(true);
        btnSalvar.setEnabled(false);
    }//GEN-LAST:event_btnLimparActionPerformed

    private void btnSalvarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnSalvarActionPerformed
        // TODO add your handling code here:
        JFileChooser chooser = new JFileChooser();
        chooser.showOpenDialog(null);
        File f = chooser.getSelectedFile();
        String filePath = f.getAbsolutePath();
        File file = new File(filePath);
        try {
            FileWriter fw = new FileWriter(file);
            BufferedWriter bw = new BufferedWriter(fw);
            
            bw.write("JOGOS: ");
            bw.newLine();
            
            for(int i=0;i < tableJogosObjeto.getRowCount(); i++){
                for(int j=0; j<tableJogosObjeto.getColumnCount(); j++){
                    bw.write(tableJogosObjeto.getValueAt(i, j).toString() + " ");
                }
                bw.newLine();
            }
            bw.newLine();
            bw.write("RESULTADOS: ");
            bw.newLine();
            
            
            for(int i=0;i < tableResultadoObjeto.getRowCount(); i++){
                for(int j=0; j<tableResultadoObjeto.getColumnCount(); j++){
                    bw.write(tableResultadoObjeto.getValueAt(i, j).toString() + " ");
                }
                bw.newLine();
            }
            
            bw.close();
            fw.close();
            
        } catch (IOException ex) {
            Logger.getLogger(brasileirao2021.class.getName()).log(Level.SEVERE, null, ex);
        }
    }//GEN-LAST:event_btnSalvarActionPerformed

    /** 
     * @param args the command line arguments
     */
    public static void main(String args[]) {
        /* Set the Nimbus look and feel */
        //<editor-fold defaultstate="collapsed" desc=" Look and feel setting code (optional) ">
        /* If Nimbus (introduced in Java SE 6) is not available, stay with the default look and feel.
         * For details see http://download.oracle.com/javase/tutorial/uiswing/lookandfeel/plaf.html 
         */
        try {
            for (javax.swing.UIManager.LookAndFeelInfo info : javax.swing.UIManager.getInstalledLookAndFeels()) {
                if ("Nimbus".equals(info.getName())) {
                    javax.swing.UIManager.setLookAndFeel(info.getClassName());
                    break;
                }
            }
        } catch (ClassNotFoundException ex) {
            java.util.logging.Logger.getLogger(brasileirao2021.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (InstantiationException ex) {
            java.util.logging.Logger.getLogger(brasileirao2021.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (IllegalAccessException ex) {
            java.util.logging.Logger.getLogger(brasileirao2021.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        } catch (javax.swing.UnsupportedLookAndFeelException ex) {
            java.util.logging.Logger.getLogger(brasileirao2021.class.getName()).log(java.util.logging.Level.SEVERE, null, ex);
        }
        //</editor-fold>

        /* Create and display the form */
        java.awt.EventQueue.invokeLater(new Runnable() {
            public void run() {
                new brasileirao2021().setVisible(true);
            }
        });
    }

    // Variables declaration - do not modify//GEN-BEGIN:variables
    private javax.swing.JButton btnGerar;
    private javax.swing.JButton btnLimpar;
    private javax.swing.JButton btnSalvar;
    private javax.swing.JLabel jLabel1;
    private javax.swing.JPanel jPanel1;
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane4;
    private javax.swing.JScrollPane jScrollPane6;
    public javax.swing.JTable jTable1;
    public javax.swing.JList<String> listaTimes;
    private javax.swing.JPanel painel;
    public javax.swing.JTable tableJogos;
    public javax.swing.JTable tableResultado;
    // End of variables declaration//GEN-END:variables
}
