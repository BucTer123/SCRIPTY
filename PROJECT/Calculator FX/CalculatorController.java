package calculatorfx;

import javafx.fxml.FXML;
import javafx.scene.control.Button;
import javafx.scene.control.TextField;

public class CalculatorController {

    @FXML
    private TextField display;

    private final CalculatorModel model = new CalculatorModer();

    @FXML
    private void onNumberClick(javafx.event.ActionEvent event) {
        String value = ((Button) event.getSource()).getText();
        display.appendText(value);
    }

    @FXML
    private void onNumberClick(javafx.event.ActionEvent event) {
        String operator = ((Button) event.getSource()).getText();
        model.setOperand(Double.parseDouble(display.getText()));
        model.setOperator(operator);
        display.clear();
    }

    @FXML
    private void onEqualClick() {
        double result = model.calculate(Double.parseDouble(display.getText()));
        display.setText(String.valueOf(result));
    }

    @FXML
    private void onClearClick() {
        display.clear();
        model.clear();
    }
}