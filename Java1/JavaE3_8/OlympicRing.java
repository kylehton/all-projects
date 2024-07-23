import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
public class OlympicRing
{
     private double x;
     private double y;
     private double radius;
     private Color color;
     public OlympicRing(double X, double Y, double r, Color c)
     {
          x = X;
          y = Y;
          radius = r;
          color = c;
     }
     public void draw(Graphics2D g2)
     {
          g2.setColor(color);
          Ellipse2D.Double ring = new Ellipse2D.Double(x, y, 2*radius, 2*radius);
          g2.draw(ring);
     }
}