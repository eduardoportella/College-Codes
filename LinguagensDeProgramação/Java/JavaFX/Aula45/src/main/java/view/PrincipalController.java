package view;

import java.net.URL;
import java.text.NumberFormat;
import java.text.ParseException;
import java.util.Locale;
import java.util.ResourceBundle;
import java.util.logging.Level;
import java.util.logging.Logger;
import javafx.application.Platform;
import javafx.beans.value.ChangeListener;
import javafx.beans.value.ObservableValue;
import javafx.event.ActionEvent;
import javafx.fxml.FXML;
import javafx.fxml.Initializable;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;

public class PrincipalController implements Initializable {
    
    private final NumberFormat nf = NumberFormat.getInstance(Locale.getDefault());

    @FXML
    private TextField txtFieldValor1;

    @FXML
    private TextField txtFieldValor2;
    
    @FXML
    private Button btnSomar;
    
    @FXML
    private Button btnSubtrair;
    
    @FXML
    private Button btnMultiplicar;
    
    @FXML
    private Button btnDividir;
    
    @FXML
    private Button btnLimpar;
    
    @FXML
    private Button btnSair;
    
    @FXML
    private Label lblResultado;
    
    @FXML
    private void btnSairClick(ActionEvent event){
         System.exit(0); 
    }
    
    @FXML
    private void btnLimparClick(ActionEvent event){
        txtFieldValor1.clear();
        txtFieldValor2.clear();
        lblResultado.setText("Resultado");
        
        //dar o foco em Valor1
        Platform.runLater(() -> {
            txtFieldValor1.requestFocus();
        });
    }
    
    @FXML
    private void btnSomarClick(ActionEvent event){
        double n1, n2;
        try {
            n1 = nf.parse(txtFieldValor1.getText()).doubleValue();
            n2 = nf.parse(txtFieldValor2.getText()).doubleValue();
            lblResultado.setText("A soma entre os valores é: " + nf.format(n1+n2));
        } catch (ParseException ex) {
            Logger.getLogger(PrincipalController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @FXML
    private void btnSubtrairClick(ActionEvent event){
        double n1, n2;
        try {
            n1 = nf.parse(txtFieldValor1.getText()).doubleValue();
            n2 = nf.parse(txtFieldValor2.getText()).doubleValue();
            lblResultado.setText("A subtração entre os valores é: " + nf.format(n1-n2));
        } catch (ParseException ex) {
            Logger.getLogger(PrincipalController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @FXML
    private void btnMultiplicarClick(ActionEvent event){
        double n1, n2;
        try {
            n1 = nf.parse(txtFieldValor1.getText()).doubleValue();
            n2 = nf.parse(txtFieldValor2.getText()).doubleValue();
            lblResultado.setText("A multiplicação entre os valores é: " + nf.format(n1*n2));
        } catch (ParseException ex) {
            Logger.getLogger(PrincipalController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
    @FXML
    private void btnDividirClick(ActionEvent event){
        double n1, n2;
        try {
            n1 = nf.parse(txtFieldValor1.getText()).doubleValue();
            n2 = nf.parse(txtFieldValor2.getText()).doubleValue();
            lblResultado.setText("A divisão entre os valores é: " + nf.format(n1/n2));
        } catch (ParseException ex) {
            Logger.getLogger(PrincipalController.class.getName()).log(Level.SEVERE, null, ex);
        }
    }
    
   

    
    @Override
    public void initialize(URL url, ResourceBundle rb) {
        txtFieldValor1.textProperty().addListener((ObservableValue<? extends String> observable, String oldValue, String newValue) -> {
            if (!newValue.matches("\\d*")) {
                txtFieldValor1.setText(newValue.replaceAll("[^\\d]", ""));
            }
        });
        
        txtFieldValor2.textProperty().addListener((ObservableValue<? extends String> observable, String oldValue, String newValue) -> {
            if (!newValue.matches("\\d*")) {
                txtFieldValor2.setText(newValue.replaceAll("[^\\d]", ""));
            }
        });
    }    
}
