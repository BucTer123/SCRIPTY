package calculatorfx;

public class CalculatorModel {
    private double operand;
    private String operator;

    public void setOperand(double operand) {
        this.operand = operand;
    }

    public void setOperator(String operator) {
        this.operator = operator;
    }

    public double calculate(double secondOperand) {
        return switch (operator) {
            case "+" -> operand + secondOperand;
            case "-" -> operand - secondOperand;
            case "*" -> operand * secondOperand;
            case "/" -> secondOperand != 0 ? operand / secondOperand : 0;
            case "%" -> operand % secondOperand;
            default -> secondOperand;
        };
    }

public void clear() {
    operand = 0;
    operator = "";
}