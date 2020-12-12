**Python Project: Projectiles**

*Description: The program requests initial starting conditions for a projectile,*
*including the initial velocity (m/s), the initial angle of departure (degrees),*
*and the height at which the object is thrown.*

*The program calculates the time of flight, and graphs the projectile's path,*
*minimizing the window required to prevent the graph from dipping too far below*
*y = 0 (ground).*

*The program takes in both whole number and decimal values, but eventually*
*rounds the values that it graphs to simplify the graphing process.*

**To build, install, and run:**

*In the desired directory:*
vim projectiles.py

*The program imports math, numbpy, and pylab. These libraries were renamed to*
*reduce the amount of text required.*

*The program then requests for the three initial values, all as floats (immediate*
*input values can be either floats or integers).*

*It then calculates a time of flight, so that the window that displays the flight*
*path is minimized.*

*The following x and y positions, using a t variable, are defined using*
*free-falling projectile equations. These two functions are graphed against*
*eachother using plt (matplotlip.pylab) by plt.grid() and plt.show().*

*plt.show() can be subsituted with or added to plt.savefig('name.png')*
*to save the graph.*

*To run:*
python3 projectiles.py
