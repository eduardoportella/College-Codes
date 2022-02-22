package view;

import java.net.URL;
import java.text.NumberFormat;
import java.text.ParseException;
import java.util.Locale;
import java.util.ResourceBundle;
import java.util.function.Predicate;
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
import javafx.scene.control.RadioButton;
import javafx.scene.control.TextField;

public class PrincipalController implements Initializable {

    private final NumberFormat nf = NumberFormat.getInstance(Locale.getDefault());

    @FXML
    private TextField txtFieldPeso;

    @FXML
    private TextField txtFieldAltura;

    @FXML
    private RadioButton rdbtnFem;

    @FXML
    private RadioButton rdbtnMasc;

    @FXML
    private Label lblImc;

    @FXML
    private Label lblCondicao;

    @FXML
    private Button btnCalcular;

    @FXML
    private Button btnLimpar;

    @FXML
    private void btnCalcularClick(ActionEvent event) {
        txtFieldPeso.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d{0,7}([\\,]\\d{0,4})?")) {
                    txtFieldPeso.setText(oldValue);
                }
            }
        });

        double altura, peso, imc;
        try {
            altura = nf.parse(txtFieldAltura.getText()).doubleValue();
            peso = nf.parse(txtFieldPeso.getText()).doubleValue();
            imc = peso / (altura * altura);
            lblImc.setText("IMC: " + nf.format(imc));

            if (rdbtnFem.isSelected()) {
                if (imc < 19.1) {
                    lblCondicao.setText("Condição: Abaixo do peso");
                } else if (imc >= 19.1 && imc < 25.8) {
                    lblCondicao.setText("Condição: No peso normal");
                } else if (imc >= 25.8 && imc < 27.3) {
                    lblCondicao.setText("Condição: Marginalmente acima do peso");
                } else if (imc >= 27.3 && imc < 32.3) {
                    lblCondicao.setText("Condição: Acima do peso ideal");
                } else {
                    lblCondicao.setText("Condição: Obeso");
                }
            } else if (rdbtnMasc.isSelected()) {
                if (imc < 20.7) {
                    lblCondicao.setText("Condição: Abaixo do peso");
                } else if (imc >= 20.7 && imc < 26.4) {
                    lblCondicao.setText("Condição: No peso normal");
                } else if (imc >= 26.4 && imc < 27.8) {
                    lblCondicao.setText("Condição: Marginalmente acima do peso");
                } else if (imc >= 27.8 && imc < 31.1) {
                    lblCondicao.setText("Condição: Acima do peso ideal");
                } else {
                    lblCondicao.setText("Condição: Obeso");
                }
            }
        } catch (ParseException ex) {
            Logger.getLogger(PrincipalController.class.getName()).log(Level.SEVERE, null, ex);
        }

    }

    @FXML
    private void btnLimparClick(ActionEvent event) {
        txtFieldAltura.clear();
        txtFieldPeso.clear();
        lblCondicao.setText("Condição:");
        lblImc.setText("IMC:");

        //dar o foco em Valor1
        Platform.runLater(() -> {
            txtFieldPeso.requestFocus();
        });
    }

    private void HabilitaBotoes() {
        btnCalcular.setDisable(txtFieldAltura.getText().isEmpty() || txtFieldPeso.getText().isEmpty());
    }

    @Override
    public void initialize(URL url, ResourceBundle rb) {
        btnCalcular.setDisable(true);
        
        txtFieldPeso.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d{0,7}([\\,]\\d{0,4})?")) {
                    txtFieldPeso.setText(oldValue);
                }
                HabilitaBotoes();
            }
        });

        txtFieldAltura.textProperty().addListener(new ChangeListener<String>() {
            @Override
            public void changed(ObservableValue<? extends String> observable, String oldValue, String newValue) {
                if (!newValue.matches("\\d{0,7}([\\,]\\d{0,4})?")) {
                    txtFieldAltura.setText(oldValue);
                }
                HabilitaBotoes();
            }
        });

        // TODO
    }
}
