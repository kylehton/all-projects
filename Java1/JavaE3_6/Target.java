import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.geom.Ellipse2D;
//create target class
public class Target 
{
     private double radius;
     private double xCenter;
     private double yCenter;

     Target(double r, double x, double y)
     {
          radius = r;
          xCenter = x;
          yCenter = y;
     } 

     public void draw(Graphics2D g2)
     {
          
          Ellipse2D.Double circle;
          double left = xCenter - radius;
          double top = yCenter - radius;

          circle = new Ellipse2D.Double(left, top, 2 * radius, 2 * radius);
          g2.setColor(Color.black);
          g2.fill(circle);

          radius = radius - radius/5; 
          final double SHRINK_CIRCLE_UNITS = radius/5; 
          left = xCenter - radius; 
          top = yCenter - radius; 

          circle= new Ellipse2D.Double(left, top, 2 * radius, 2 * radius);
          g2.setColor(Color.white); 
          g2.fill(circle); 
          System.out.println(SHRINK_CIRCLE_UNITS);

          radius = radius - SHRINK_CIRCLE_UNITS;
          left = xCenter - radius;
          top = yCenter - radius;
          circle = new Ellipse2D.Double(left, top, 2 * radius, 2 * radius);
          g2.setColor(Color.black);
          g2.fill(circle);
          System.out.println(SHRINK_CIRCLE_UNITS);

          radius = radius - SHRINK_CIRCLE_UNITS;
          left = xCenter - radius;
          top = yCenter - radius;
          circle = new Ellipse2D.Double(left, top, 2 * radius, 2 * radius);
          g2.setColor(Color.white);
          g2.fill(circle);
          System.out.println(SHRINK_CIRCLE_UNITS);

          radius = radius - SHRINK_CIRCLE_UNITS;
          left = xCenter - radius;
          top = yCenter - radius;
          circle = new Ellipse2D.Double(left, top, 2 * radius, 2 * radius);
          g2.setColor(Color.black);
          g2.fill(circle);
          System.out.println(SHRINK_CIRCLE_UNITS);
     } 
}