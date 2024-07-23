import java.awt.Graphics2D;
import javax.swing.JComponent;

public class CarComponent extends JComponent{
     
     public void paintComponent(Graphics2D g){
          Graphics2D g2 = (Graphics2D) g;

          Car Car1 = new Car(0,0);

          int x2 = getWidth() - 60;
          int y2 = getHeight() - 30;

          Car Car2 = new Car(x2,y2);

          Car1.draw(g2);
          Car2.draw(g2);
     }
}
