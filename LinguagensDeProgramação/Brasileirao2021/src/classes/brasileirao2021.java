/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package classes;

import java.util.Random;
import javax.swing.DefaultListModel;
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
    Boolean jaGerou = false;

    /**
     * Creates new form brasileirao2021
     */
    public brasileirao2021() {
        initComponents();
        criaLista();
        tableResultado.setRowSorter(new TableRowSorter(tableResultadoObjeto));
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
    
    public void jogar(){
        Random aleatorio = new Random();
        for (int i=0; i<lista.getSize(); i++){
            int pontos=0, vitorias=0, empates=0, derrotas=0, GP=0, GN=0, SG=0;
            for (int j=0; j<lista.getSize(); j++){
                if (i!=j){
                    int gol1 = aleatorio.nextInt(6);
                    int gol2 = aleatorio.nextInt(6);
                    tableJogosObjeto.addRow(new Object[]{
                    lista.getElementAt(i), gol1,
                    " ", gol2, lista.getElementAt(j)
                    });
                    if(gol1>gol2){
                        vitorias++;
                        pontos+=3;
                    } else if (gol1==gol2){
                        empates++;
                        pontos++;
                    } else {
                        derrotas++;
                    }
                    GP=GP+gol1;
                    GN=GN+gol2;
                    SG=GP-GN;
                }
            } //for j
            tableResultadoObjeto.addRow(new Object[]{
                    lista.getElementAt(i), pontos, vitorias, empates, derrotas,
                    GP, GN, SG
            });
        } //for i
        tableJogos.setModel(tableJogosObjeto);
        
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
        jScrollPane1 = new javax.swing.JScrollPane();
        listaTimes = new javax.swing.JList<>();
        jLabel1 = new javax.swing.JLabel();
        btnGerar = new javax.swing.JButton();
        btnSalvar = new javax.swing.JButton();
        btnLimpar = new javax.swing.JButton();
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

        listaTimes.setToolTipText("");
        jScrollPane1.setViewportView(listaTimes);

        jLabel1.setText("Times");

        btnGerar.setText("Gerar");
        btnGerar.addActionListener(new java.awt.event.ActionListener() {
            public void actionPerformed(java.awt.event.ActionEvent evt) {
                btnGerarActionPerformed(evt);
            }
        });

        btnSalvar.setText("Salvar");

        btnLimpar.setText("Limpar");
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

        javax.swing.GroupLayout layout = new javax.swing.GroupLayout(getContentPane());
        getContentPane().setLayout(layout);
        layout.setHorizontalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(18, 18, 18)
                        .addComponent(jLabel1))
                    .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 114, javax.swing.GroupLayout.PREFERRED_SIZE)
                    .addGroup(layout.createSequentialGroup()
                        .addGap(10, 10, 10)
                        .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                            .addComponent(btnGerar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(btnSalvar, javax.swing.GroupLayout.DEFAULT_SIZE, javax.swing.GroupLayout.DEFAULT_SIZE, Short.MAX_VALUE)
                            .addComponent(btnLimpar, javax.swing.GroupLayout.PREFERRED_SIZE, 74, javax.swing.GroupLayout.PREFERRED_SIZE))))
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.UNRELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING, false)
                    .addComponent(jScrollPane6, javax.swing.GroupLayout.DEFAULT_SIZE, 856, Short.MAX_VALUE)
                    .addComponent(jScrollPane4))
                .addGap(0, 65, Short.MAX_VALUE))
        );
        layout.setVerticalGroup(
            layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
            .addGroup(layout.createSequentialGroup()
                .addContainerGap()
                .addComponent(jLabel1)
                .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                .addGroup(layout.createParallelGroup(javax.swing.GroupLayout.Alignment.LEADING)
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jScrollPane1, javax.swing.GroupLayout.PREFERRED_SIZE, 414, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnGerar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnSalvar)
                        .addPreferredGap(javax.swing.LayoutStyle.ComponentPlacement.RELATED)
                        .addComponent(btnLimpar)
                        .addGap(0, 0, Short.MAX_VALUE))
                    .addGroup(layout.createSequentialGroup()
                        .addComponent(jScrollPane4, javax.swing.GroupLayout.PREFERRED_SIZE, 193, javax.swing.GroupLayout.PREFERRED_SIZE)
                        .addGap(18, 18, 18)
                        .addComponent(jScrollPane6, javax.swing.GroupLayout.PREFERRED_SIZE, 0, Short.MAX_VALUE)))
                .addContainerGap())
        );

        pack();
    }// </editor-fold>//GEN-END:initComponents

    private void btnGerarActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnGerarActionPerformed
        // TODO add your handling code here:
        if (jaGerou == false){
            criaTable1();
            criaTable2();
            jogar();
        }
        jaGerou=true;
    }//GEN-LAST:event_btnGerarActionPerformed

    private void btnLimparActionPerformed(java.awt.event.ActionEvent evt) {//GEN-FIRST:event_btnLimparActionPerformed
        // TODO add your handling code here:
        tableJogosObjeto = new DefaultTableModel();
        tableResultadoObjeto = new DefaultTableModel();
        tableJogos.setModel(tableJogosObjeto);
        tableResultado.setModel(tableResultadoObjeto);
        tableResultado.setRowSorter(new TableRowSorter(tableResultadoObjeto));
        jaGerou = false;
    }//GEN-LAST:event_btnLimparActionPerformed

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
    private javax.swing.JScrollPane jScrollPane1;
    private javax.swing.JScrollPane jScrollPane2;
    private javax.swing.JScrollPane jScrollPane4;
    private javax.swing.JScrollPane jScrollPane6;
    public javax.swing.JTable jTable1;
    public javax.swing.JList<String> listaTimes;
    public javax.swing.JTable tableJogos;
    public javax.swing.JTable tableResultado;
    // End of variables declaration//GEN-END:variables
}
