package calculatorfx;

import javafx.application.Application;
import javafx,fxml.FXMLLoader;
import javafx.scene.Scene;
import javafx.stage.Stage;

public class CalculatorApp extends Application {
    @Override
    public void start(Stage stage) throws Exception {
        FXMLLoader loader = new FXMLLoader(getClass().getResource("caluclator_view.fxml"));
        Scene scene = new Scene(loader.load());
        stage.setTitle("JavaFx Calculator");
        stage.setScene(scene);
        stage.setResizable(false);
        stage.show();
    }
}
